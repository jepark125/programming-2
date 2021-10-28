#ifndef SECDIALOG_H
#define SECDIALOG_H
#include<QtSql>
#include <QDialog>

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    QSqlDatabase mydb;
    void connClose();
    bool connOpen(){
        QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/Users/junsuk/course_db.db");
        if(!mydb.open()){
            qDebug()<<("Failed to open the db");
        }else
            qDebug()<<("Connected...");

    }


public:
    explicit SecDialog(QWidget *parent = nullptr);
    ~SecDialog();

private slots:


    void on_Add_Pushbutton_clicked();

    void on_loadData_clicked();

private:
    Ui::SecDialog *ui;
};

#endif // SECDIALOG_H
