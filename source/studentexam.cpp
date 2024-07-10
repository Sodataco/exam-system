#include "studentexam.h"
#include "ui_studentexam.h"

studentexam::studentexam(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::studentexam)
{
    ui->setupUi(this);
    // 初始化界面
        currentQuestion = 0;  // 当前题目编号从0开始
        totalQuestions = 25;  // 总题目数量为25

        ui->radioButton_1->setChecked(true);
        // 设置题目文本初始内容
        ui->textBrowser_2->setText("这里显示第一题内容");

        // 设置选项按钮初始状态和信号连接
        connect(ui->commandLinkButton, &QCommandLinkButton::clicked, this, &studentexam::onOptionClicked);
        connect(ui->commandLinkButton_2, &QCommandLinkButton::clicked, this, &studentexam::onOptionClicked);
        connect(ui->commandLinkButton_3, &QCommandLinkButton::clicked, this, &studentexam::onOptionClicked);
        connect(ui->commandLinkButton_4, &QCommandLinkButton::clicked, this, &studentexam::onOptionClicked);

        // 初始化题目完成状态和信号连接
        for (int i = 0; i < totalQuestions; ++i) {
            QRadioButton *radioButton = findChild<QRadioButton *>(QString("radioButton_%1").arg(i + 1));
                   if (radioButton) {
                       connect(radioButton, &QRadioButton::clicked, this, &studentexam::onRadioButtonClicked);
                       radioButtons.append(radioButton);  // 将单选按钮添加到列表中
                       questionCompleted.append(false);  // 所有题目初始状态为未完成
                   }
        }

        // 设置进度条的最大值和初始值
        ui->progressBar->setMinimum(0);
        ui->progressBar->setMaximum(totalQuestions);
        updateProgressBar();

        // 连接切换题目按钮的信号与槽
        connect(ui->pushButton, &QPushButton::clicked, this, &studentexam::onPreviousClicked);
        connect(ui->pushButton_2, &QPushButton::clicked, this, &studentexam::onNextClicked);

        // 连接退出按钮的信号与槽
        connect(ui->pushButton_3, &QPushButton::clicked, this, &studentexam::onExitClicked);
}

studentexam::~studentexam()
{
    delete ui;
}
void studentexam::onOptionClicked()
{
    QCommandLinkButton *button = qobject_cast<QCommandLinkButton*>(sender());
    if (button) {
        button->setStyleSheet("background-color: green;");  // 设置选中选项按钮的背景颜色为绿色
    }
}

void studentexam::onRadioButtonClicked()
{
    for (int i = 1; i <= 25; ++i) {
        QString buttonName = QString("radioButton_%1").arg(i);
        QRadioButton *radioButton = findChild<QRadioButton *>(buttonName);

        if (radioButton && radioButton->isChecked()) {
            int index = i - 1;  // 题目索引从0开始，所以需要减1
            currentQuestion = index;  // 更新当前选中的题目索引
            ui->textBrowser_2->setText(QString("这里显示第 %1 题内容").arg(index + 1));
            break;  // 如果找到被选中的单选按钮，跳出循环
        }
    }
}


void studentexam::onPreviousClicked()
{
    if (currentQuestion > 0 && currentQuestion < totalQuestions) {
    currentQuestion=currentQuestion-1;
    ui->textBrowser_2->setText(QString("这里显示第 %1 题内容").arg(currentQuestion + 1));  // 在文本浏览器中显示上一题的内容
    QRadioButton *buttonToClick = nullptr;
    switch (currentQuestion) {
        case 0:
            buttonToClick = ui->radioButton_1;
            break;
        case 1:
            buttonToClick = ui->radioButton_2;
            break;
        case 2:
            buttonToClick = ui->radioButton_3;
            break;
        case 3:
            buttonToClick = ui->radioButton_4;
            break;
        case 4:
            buttonToClick = ui->radioButton_5;
            break;
        case 5:
            buttonToClick = ui->radioButton_6;
            break;
        case 6:
            buttonToClick = ui->radioButton_7;
            break;
        case 7:
            buttonToClick = ui->radioButton_8;
            break;
        case 8:
            buttonToClick = ui->radioButton_9;
            break;
        case 9:
            buttonToClick = ui->radioButton_10;
            break;
        case 10:
            buttonToClick = ui->radioButton_11;
            break;
        case 11:
            buttonToClick = ui->radioButton_12;
            break;
        case 12:
            buttonToClick = ui->radioButton_13;
            break;
        case 13:
            buttonToClick = ui->radioButton_14;
            break;
        case 14:
            buttonToClick = ui->radioButton_15;
            break;
        case 15:
            buttonToClick = ui->radioButton_16;
            break;
        case 16:
            buttonToClick = ui->radioButton_17;
            break;
        case 17:
            buttonToClick = ui->radioButton_18;
            break;
        case 18:
            buttonToClick = ui->radioButton_19;
            break;
        case 19:
            buttonToClick = ui->radioButton_20;
            break;
        case 20:
            buttonToClick = ui->radioButton_21;
            break;
        case 21:
            buttonToClick = ui->radioButton_22;
            break;
        case 22:
            buttonToClick = ui->radioButton_23;
            break;
        case 23:
            buttonToClick = ui->radioButton_24;
            break;
        case 24:
            buttonToClick = ui->radioButton_25;
            break;
           default:
               // 处理超出范围的情况，这里可以选择不做任何操作或者抛出异常
               break;
       }

       if (buttonToClick) {
           buttonToClick->setChecked(true);  // 设置按钮为选中状态，模拟点击操作
       }
    }
}


void studentexam::onNextClicked()
{
    if (currentQuestion >= 0 && currentQuestion < totalQuestions-1) {
    currentQuestion=currentQuestion+1;
    ui->textBrowser_2->setText(QString("这里显示第 %1 题内容").arg(currentQuestion + 1));  // 在文本浏览器中显示下一题的内容
    QRadioButton *buttonToClick = nullptr;
    switch (currentQuestion) {
        case 0:
            buttonToClick = ui->radioButton_1;
            break;
        case 1:
            buttonToClick = ui->radioButton_2;
            break;
        case 2:
            buttonToClick = ui->radioButton_3;
            break;
        case 3:
            buttonToClick = ui->radioButton_4;
            break;
        case 4:
            buttonToClick = ui->radioButton_5;
            break;
        case 5:
            buttonToClick = ui->radioButton_6;
            break;
        case 6:
            buttonToClick = ui->radioButton_7;
            break;
        case 7:
            buttonToClick = ui->radioButton_8;
            break;
        case 8:
            buttonToClick = ui->radioButton_9;
            break;
        case 9:
            buttonToClick = ui->radioButton_10;
            break;
        case 10:
            buttonToClick = ui->radioButton_11;
            break;
        case 11:
            buttonToClick = ui->radioButton_12;
            break;
        case 12:
            buttonToClick = ui->radioButton_13;
            break;
        case 13:
            buttonToClick = ui->radioButton_14;
            break;
        case 14:
            buttonToClick = ui->radioButton_15;
            break;
        case 15:
            buttonToClick = ui->radioButton_16;
            break;
        case 16:
            buttonToClick = ui->radioButton_17;
            break;
        case 17:
            buttonToClick = ui->radioButton_18;
            break;
        case 18:
            buttonToClick = ui->radioButton_19;
            break;
        case 19:
            buttonToClick = ui->radioButton_20;
            break;
        case 20:
            buttonToClick = ui->radioButton_21;
            break;
        case 21:
            buttonToClick = ui->radioButton_22;
            break;
        case 22:
            buttonToClick = ui->radioButton_23;
            break;
        case 23:
            buttonToClick = ui->radioButton_24;
            break;
        case 24:
            buttonToClick = ui->radioButton_25;
            break;
           default:
               // 处理超出范围的情况，这里可以选择不做任何操作或者抛出异常
               break;
       }

       if (buttonToClick) {
           buttonToClick->setChecked(true);  // 设置按钮为选中状态，模拟点击操作
       }
    }
}

void studentexam::onExitClicked()
{
    this->close();  // 关闭考试界面
    emit showpreexam();
}

void studentexam::updateProgressBar()
{
    int completedCount = 0;
    for (bool completed : questionCompleted) {
        if (completed) {
            completedCount++;
        }
    }
    ui->progressBar->setValue(completedCount);  // 更新进度条的进度
}

void studentexam::receivelogin(){
    this->show();
}
