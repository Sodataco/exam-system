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


    // 执行数据库查询

    QSqlQuery   query(user_db);
    //选择
    if (query.exec("select question_text FROM choice_questions")) {
        while (query.next()) {
            QString examName = query.value(0).toString();
            QListWidgetItem *item = new QListWidgetItem();
            QCheckBox *checkBox= new QCheckBox ();
            checkBox->setText(examName);
            ui->questionList->addItem(item);//在ListWidget中添加一个条目
            ui->questionList->setItemWidget(item, checkBox);//在这个条目中放置CheckBox


        }
    } else {
        qDebug() << "Query failed:" << query.lastError();
    }
    //
    if (query.exec("select question_text FROM questions")) {
        while (query.next()) {
            QString examName = query.value(0).toString();
            QListWidgetItem *item = new QListWidgetItem();
            QCheckBox *checkBox= new QCheckBox ();
            checkBox->setText(examName);
            ui->questionList->addItem(item);//在ListWidget中添加一个条目
            ui->questionList->setItemWidget(item, checkBox);//在这个条目中放置CheckBox
        }
    } else {
        qDebug() << "Query failed:" << query.lastError();
    }

    if (query.exec("select question_text FROM tk_questions")) {
        while (query.next()) {
            QString examName = query.value(0).toString();
            QListWidgetItem *item = new QListWidgetItem();
            QCheckBox *checkBox= new QCheckBox ();
            checkBox->setText(examName);
            ui->questionList->addItem(item);//在ListWidget中添加一个条目
            ui->questionList->setItemWidget(item, checkBox);//在这个条目中放置CheckBox
        }
    } else {
        qDebug() << "Query failed:" << query.lastError();
    }


}

