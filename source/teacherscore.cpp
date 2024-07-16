#include "teacherscore.h"
#include "ui_teacherscore.h"

void callPythonScript(const QString &question, int fullScore, const QString &answer, const QString &studentAnswer, int &score, QString &feedback) {
    QProcess process;
    QStringList arguments;
    arguments << "feedback_generator.py" << question << QString::number(fullScore) << answer << studentAnswer;

    process.start("python", arguments);
    process.waitForFinished();

    QString output = process.readAllStandardOutput();
    QStringList outputLines = output.split('\n');

    if (outputLines.size() >= 2) {
        score = outputLines[0].toInt();
        feedback = outputLines[1];
    }
    qDebug()<<"114514";
}


teacherscore::teacherscore(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::teacherscore)
{
    ui->setupUi(this);
    int s1;
    QString s2;
    callPythonScript("2和3哪个更大",10,"3","3",s1,s2);
    qDebug()<<s1<<s2;
}

teacherscore::~teacherscore()
{
    delete ui;
}


