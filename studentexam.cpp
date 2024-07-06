#include "widget.h"                // 包含Widget类的头文件
#include <QInputDialog>            // 包含输入对话框的头文件
#include <QDialog>                 // 包含对话框的头文件
#include "mydialog.h"              // 包含自定义对话框的头文件
#include <QDebug>                  // 包含调试输出的头文件
#include <choicequestion.h>        // 包含选择题类的头文件
#include <QVBoxLayout>             // 包含垂直布局类的头文件
#include <QScrollArea>             // 包含滚动区域类的头文件
#include <QMessageBox>             // 包含消息框类的头文件

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    // 创建一个自定义对话框并显示
    myDialog *d = new myDialog;
    d->exec();

    // 如果用户未登录，则退出程序
    if(!d->getLoginStat())
        exit(0);

    // 显示用户的名字
    lb_name = new QLabel(d->getUserName());

    // 创建显示时间的QLCDNumber和计时器
    lcd_time = new QLCDNumber;
    t = new QTimer;
    t->start(1000);  // 每隔一秒触发一次timeout信号
    connect(t, &QTimer::timeout, [&](){
        static int data = 100;  // 初始时间为100秒
        lcd_time->display(data--);  // 更新显示的剩余时间
        if(data == 0)
            endTest();  // 时间到，结束考试
    });

    // 创建100道选择题并加入questions列表
    createQuestions();

    // 创建一个QWidget用于放置所有的选择题，并使用垂直布局管理器
    QWidget *w = new QWidget;
    QVBoxLayout *vbox = new QVBoxLayout;
    w->setLayout(vbox);
    for(int i=0; i<questions.length(); i++)
        vbox->addWidget(questions[i]);  // 将每道题加入垂直布局中
    QScrollArea *sa = new QScrollArea;
    sa->setWidget(w);  // 将QWidget放入滚动区域中

    // 创建显示进度的QProgressBar和交卷按钮QPushButton
    pb_progress = new QProgressBar;
    bt_over = new QPushButton("交卷");
    connect(bt_over, &QPushButton::clicked, this, &Widget::endTest);

    // 创建主布局管理器，并将控件添加到布局中
    QVBoxLayout *mainbox = new QVBoxLayout;
    mainbox->addWidget(lb_name);
    mainbox->addWidget(lcd_time);
    mainbox->addWidget(sa);
    mainbox->addWidget(pb_progress);
    mainbox->addWidget(bt_over);
    setLayout(mainbox);  // 设置Widget的主布局为mainbox
}

void Widget::endTest()
{
    // 弹出消息框显示成绩，统计已做题目的数量
    QMessageBox::information(this, "成绩", QString("你做了%0道题").arg(questionAnswer.length()-questionAnswer.count(-1)));
}

void Widget::createQuestions()
{
    // 创建100道选择题并添加到questions列表中
    for(int i=0; i<100; i++)
    {
        choiceQuestion *t = new choiceQuestion;
        t->setQuestion(QString::number(i)+".xxxxxx");  // 设置问题内容
        t->addChoice(QString("A")+" yyyy");  // 添加选项A
        t->addChoice(QString("B")+" zzzz");  // 添加选项B
        t->addChoice(QString("C")+" mmm");   // 添加选项C
        t->addChoice(QString("D")+" nnnn");  // 添加选项D
        questions.append(t);  // 将问题加入questions列表
        questionAnswer.append(-1);  // 初始化问题答案为-1
        connect(t, SIGNAL(chosed(int)), this, SLOT(makeChoice(int)));  // 连接选择题的chosed信号和Widget的makeChoice槽函数
    }
}

void Widget::makeChoice(int choiceNum)
{
    // 获取发送信号的选择题对象
    choiceQuestion *t = static_cast<choiceQuestion *>( sender() );
    int questionNum = 0;

    // 遍历questions列表，找到发送信号的选择题在列表中的位置
    for(; questionNum<questions.length(); questionNum++)
        if(t == questions[questionNum])
            break;

    // 记录该题的选择答案
    questionAnswer[questionNum] = choiceNum;

    // 更新进度显示
    pb_progress->setValue(questionAnswer.length()-questionAnswer.count(-1));
}

Widget::~Widget()
{

}
