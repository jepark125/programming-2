#include "secdialog.h"
#include "ui_secdialog.h"
#include "course3.h"
#include <QtSql>
#include <string>
SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
    if(!mydb.open()){
        ui->label->setText("Failed to open the db");
    }else
        ui->label->setText("Connected...");

}

SecDialog::~SecDialog()
{
    delete ui;
}













void SecDialog::on_Add_Pushbutton_clicked()
{
    course3 course;
    course.setModal(true);
    course.exec();
}


void SecDialog::on_loadData_clicked()
{
    //SecDialog conn;

    //QSqlQueryModel * modal = new QSqlQueryModel();
    //conn.connOpen();
    //QSqlQuery qry = new QSqlQuery(conn.mydb);
    //qry->prepare("select * from course_db");
    //qry->exec();
    //modal ->setQuery(*qry);
    //ui->tableView->setModel(modal);
    //conn.connClose();

    //qDebug() >> (modal->rowCount());

}

