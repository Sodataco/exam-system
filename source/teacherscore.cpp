#include "teacherscore.h"
#include "ui_teacherscore.h"

teacherscore::teacherscore(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::teacherscore)
{
    ui->setupUi(this);
}

teacherscore::~teacherscore()
{
    delete ui;
}

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
}
