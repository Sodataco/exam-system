#include "user.h"

void users::build(){

    if(QSqlDatabase::contains("qt_sql_default_connection"))
        user_db = QSqlDatabase::database("qt_sql_default_connection");
    else
        user_db = QSqlDatabase::addDatabase("QMYSQL");

    user_db.setHostName("182.92.153.163");  // MySQL 主机名
    user_db.setPort(3306); // MySQL默认端口
    user_db.setDatabaseName("user_db");  // 数据库名称
    user_db.setUserName("ourAdmin");  // 登录用户名
    user_db.setPassword("123456");  // 登录密码

    if (user_db.open()) {
        qDebug() << "Connected to MySQL!";
        // 执行数据库操作
    } else {
        qDebug() << "Failed to connect to MySQL:" << user_db.lastError().text();
    }

    //创建数据表
    QSqlQuery query(user_db);

    query.exec("CREATE TABLE IF NOT EXISTS papers ("
               "paper_id INT AUTO_INCREMENT,"
               "paper_name VARCHAR(255) NOT NULL,"
               "PRIMARY KEY (paper_id))");

    query.exec("CREATE TABLE IF NOT EXISTS user ("
               "zhanghao VARCHAR(255) UNIQUE,"
               "mima VARCHAR(255),"
               "name VARCHAR(255),"
               "num INT)");

    query.exec("CREATE TABLE IF NOT EXISTS class ("
               "class_id INT NOT NULL,"
               "user_id VARCHAR(255) NOT NULL)");

<<<<<<< Updated upstream
    query.exec("CREATE TABLE result(paper_id INTEGER NOT NULL,user_id text NOT NULL,score INTEGER)");
=======
    query.exec("CREATE TABLE IF NOT EXISTS result ("
               "paper_id INT NOT NULL,"
               "user_id VARCHAR(255) NOT NULL,"
               "question_type INT)");
>>>>>>> Stashed changes

    query.exec("CREATE TABLE IF NOT EXISTS questions ("
               "question_id INT AUTO_INCREMENT,"
               "paper_id INT NOT NULL,"
               "question_text TEXT NOT NULL,"
               "answer_text TEXT NOT NULL,"
               "user_id VARCHAR(255),"
               "is_use BOOLEAN,"
               "PRIMARY KEY (question_id),"
               "FOREIGN KEY (paper_id) REFERENCES papers(paper_id))");

    query.exec("CREATE TABLE IF NOT EXISTS tk_questions ("
               "question_id INT AUTO_INCREMENT,"
               "paper_id INT NOT NULL,"
               "question_text TEXT NOT NULL,"
               "answer_text TEXT NOT NULL,"
               "user_id VARCHAR(255),"
               "is_use BOOLEAN,"
               "PRIMARY KEY (question_id),"
               "FOREIGN KEY (paper_id) REFERENCES papers(paper_id))");

    query.exec("CREATE TABLE IF NOT EXISTS choice_questions ("
               "question_id INT AUTO_INCREMENT,"
               "paper_id INT NOT NULL,"
               "question_text TEXT NOT NULL,"
               "option_a TEXT,"
               "option_b TEXT,"
               "option_c TEXT,"
               "option_d TEXT,"
<<<<<<< Updated upstream
               "answer TEXT NOT NULL,"
               "user_id text,"
               "is_use bool,"
               "FOREIGN KEY (paper_id) REFERENCES papers(paper_id));");

=======
               "answer INT NOT NULL,"
               "user_id VARCHAR(255),"
               "is_use BOOLEAN,"
               "PRIMARY KEY (question_id),"
               "FOREIGN KEY (paper_id) REFERENCES papers(paper_id))");
>>>>>>> Stashed changes

    query.exec("CREATE TABLE IF NOT EXISTS kaoshi ("
               "paper_id INT NOT NULL,"
               "user_id VARCHAR(255) NOT NULL,"
               "question_type INT,"
               "choice_answer INT,"
               "question_id INT,"
               "score INT,"
               "question_num INT,"
               "question_text TEXT,"
<<<<<<< Updated upstream
               "tk_answer TEXT"
               "FOREIGN KEY (paper_id) REFERENCES papers(paper_id));");
=======
               "FOREIGN KEY (paper_id) REFERENCES papers(paper_id))");
>>>>>>> Stashed changes

    qDebug() << "user_db数据库表已创建";

    query.finish();

    return;
}

users::users(){
    build();
}





