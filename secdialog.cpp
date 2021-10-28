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
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/junsuk/course_db.db");
    if(!mydb.open()){
        ui->label->setText("Failed to open the db");
    }else
        ui->label->setText("Connected...");
    mydb.open();
    model = new QSqlTableModel(this);
    model->setTable("course_db");
    ui->tableView->setModel(model);

}

SecDialog::~SecDialog()
{
    delete ui;
}


void SecDialog::on_Add_Pushbutton_clicked()
{
    hide();
    course3 course;
    course.setModal(true);
    course.exec();
}


void SecDialog::on_loadData_clicked()
{
   model->select();
}

