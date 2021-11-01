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
    QPixmap pix("C:/Users/zzung/Desktop/P_II/Home.png");               // change image address
    ui->back_label->setPixmap(pix.scaled(800,800,Qt::KeepAspectRatio));    

    QPixmap pixmap("C:/Users/zzung/Desktop/P_II/icon_Students.png");   // change image address
    QIcon ButtonIcon(pixmap);
    ui->pushButton->setIcon(ButtonIcon);
    ui->pushButton->setIconSize(QSize(155, 155));

    QPixmap pixmap2("C:/Users/zzung/Desktop/P_II/icon_Courses.png");   // change image address
    QIcon ButtonIcon_2(pixmap2);
    ui->pushButton_2->setIcon(ButtonIcon_2);
    ui->pushButton_2->setIconSize(QSize(155, 155));
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

