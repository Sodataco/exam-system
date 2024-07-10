#include "combinepaper.h"
#include "ui_combinepaper.h"

combinePaper::combinePaper(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::combinePaper)
{
    ui->setupUi(this);

    ui->title->setPlaceholderText("本卷名称");

    // 创建一个当前时刻的QDateTime对象
    QDateTime now = QDateTime::currentDateTime();

    // 打印当前日期和时间（默认本地时区）
    qDebug() << "Current datetime: " << now.toString("yyyy-MM-dd HH:mm:ss.zzz");


}

combinePaper::~combinePaper()
{
    delete ui;
}


void combinePaper::receivelogin(){
    this->show();
}

//导入并上传
void combinePaper::on_finish_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "确定要上传本卷吗?",QMessageBox::Yes | QMessageBox::No);

   if (reply == QMessageBox::No) {
       qDebug() << "User chose to cancel.";
       return;
   }



    QDateTime Time=ui->dateTimeEdit->dateTime();// 日期时间
    QTime timelong=ui->timeEdit->time();//考试时长


    this->hide();
    emit showteacher();
    qDebug()<<"你设置的考试时间是"<<Time;
    qDebug()<<"你设置的考试时长是"<<timelong;

}


//取消并退出
void combinePaper::on_Return_clicked()
{
    //退出前询问用户是否保存
    QMessageBox::StandardButton saveOrNot;
    saveOrNot = QMessageBox::question(this, "Confirmation", "Do you want to save this paper?",QMessageBox::Yes | QMessageBox::No);



    if (saveOrNot == QMessageBox::No) {

        ui->questionList->clear();
        ui->disorder->setChecked(false);
        ui->stickanswer->setChecked(false);
        ui->updateimage->setChecked(false);
        ui->dateTimeEdit->clear();
        ui->timeEdit->clear();
        ui->title->clear();

        this->hide();
        emit showteacher();

       return;
    }

    this->hide();
    emit showteacher();
}



void combinePaper::on_Refresh_clicked()
{
    // 清空当前列表
    ui->questionList->clear();

    for(int i = 0; i < 10; i++)
    {
        QListWidgetItem *item = new QListWidgetItem();
        QCheckBox *checkBox= new QCheckBox ();
        checkBox->setText("一加一等于几");
        ui->questionList->addItem(item);//在ListWidget中添加一个条目
        ui->questionList->setItemWidget(item, checkBox);//在这个条目中放置CheckBox
        //icheckBox->setText(QString("checkBox_%1").arg(i));

        //把所有checkBox的信号都引向同一个槽
        connect(checkBox, SIGNAL(stateChanged(int)), this, SLOT(anyStateChanged()));
    }



    // 执行数据库查询
    /*
    QSqlQuery query;
    if (query.exec("select exam FROM exams")) {
        while (query.next()) {
            QString examName = query.value(0).toString();
            // 将考试场次添加到QListWidget中
            examList->addItem(examName);
        }
    } else {
        qDebug() << "Query failed:" << query.lastError();
    }
                                                balabala...        */
    ui->questionList->addItem("111");
    ui->questionList->addItem("112");
    ui->questionList->addItem("113");
    ui->questionList->addItem("12EWQ31");
    ui->questionList->addItem("12Q23");
    ui->questionList->addItem("123243");
    ui->questionList->addItem("123");
}

