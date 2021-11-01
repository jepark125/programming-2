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

    QPixmap pix("C:/Users/zzung/Desktop/P_II/course1.png");               // change image address
    ui->label_2->setPixmap(pix.scaled(800,800,Qt::KeepAspectRatio));

    QPixmap pixmap("C:/Users/zzung/Desktop/P_II/icon_undo.png");   // change image address
    QIcon ButtonIcon(pixmap);
    ui->back_pushbutton->setIcon(ButtonIcon);
    ui->back_pushbutton->setIconSize(QSize(90, 90));


    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/zzung/course_db.db");   // change address
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

