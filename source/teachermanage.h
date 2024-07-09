#ifndef TEACHERMANAGE_H
#define TEACHERMANAGE_H

#include <QWidget>

namespace Ui {
class teachermanage;
}

class teachermanage : public QWidget
{
    Q_OBJECT

public:
    explicit teachermanage(QWidget *parent = 0);
    ~teachermanage();

private:
    Ui::teachermanage *ui;

signals:
    void showteacher();

private slots:
    void on_changegrade_clicked();  // 示例：导入Excel文件的槽函数声明
    void on_manage_clicked();  // 示例：导入账户的槽函数声明
    void on_Return_clicked();  // 示例：修改密码的槽函数声明
    void receivelogin();
};
#endif // TEACHERMANAGE_H
