#include "secdialog2.h"
#include "ui_secdialog2.h"

SecDialog2::SecDialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog2)
{
    ui->setupUi(this);
}

SecDialog2::~SecDialog2()
{
    delete ui;
}
