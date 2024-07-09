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

        // 设置题目文本初始内容
        ui->textBrowser_2->setText("这里显示题目内容");

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
    QRadioButton *radioButton = qobject_cast<QRadioButton*>(sender());
    if (radioButton) {
        int index = ui->verticalLayout_2->indexOf(radioButton);
        currentQuestion = index;  // 切换到选中的题目
        ui->textBrowser_2->setText(QString("这里显示第 %1 题内容").arg(index + 1));
    }
}

void studentexam::onPreviousClicked()
{
    // 恢复当前题目的单选按钮为原色
       if (currentQuestion >= 0 && currentQuestion < totalQuestions) {
           radioButtons[currentQuestion]->setStyleSheet("");  // 恢复原色
       }

       // 切换到上一题
       if (currentQuestion > 0) {
           currentQuestion--;  // 更新当前题目编号为上一题
           ui->textBrowser_2->setText(QString("这里显示第 %1 题内容").arg(currentQuestion + 1));  // 在文本浏览器中显示上一题的内容

           // 更新对应的单选按钮为选中状态
           radioButtons[currentQuestion]->setStyleSheet("background-color: yellow;");  // 设置选中的单选按钮背景色为黄色（示例）
       }
}

void studentexam::onNextClicked()
{
    // 恢复当前题目的单选按钮为原色
        if (currentQuestion >= 0 && currentQuestion < totalQuestions) {
            radioButtons[currentQuestion]->setStyleSheet("");  // 恢复原色
        }

        // 切换到下一题
        if (currentQuestion < totalQuestions - 1) {
            currentQuestion++;  // 更新当前题目编号为下一题
            ui->textBrowser_2->setText(QString("这里显示第 %1 题内容").arg(currentQuestion + 1));  // 在文本浏览器中显示下一题的内容

            // 更新对应的单选按钮为选中状态
            radioButtons[currentQuestion]->setStyleSheet("background-color: yellow;");  // 设置选中的单选按钮背景色为黄色（示例）
        }
}

void studentexam::onExitClicked()
{
    this->hide();  // 关闭考试界面
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
