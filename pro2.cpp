#include "pro2.h"
#include "ui_pro2.h"
#include "secdialog.h"
#include "secdialog2.h"
#include <QtSql>
#include <QPixmap>
pro2::pro2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::pro2)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/junsuk/Desktop/C++ Homework/background1.png");
    ui->back_label->setPixmap(pix.scaled(800,800,Qt::KeepAspectRatio));
}

pro2::~pro2()
{
    delete ui;
}


void pro2::on_pushButton_clicked()
{
    hide();
    SecDialog secDialog;
    secDialog.setModal(true);
    secDialog.exec();
}


void pro2::on_pushButton_2_clicked()
{
    hide();
    SecDialog2 secDialog2;
    secDialog2.setModal(true);
    secDialog2.exec();
}

