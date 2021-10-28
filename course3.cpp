#include "course3.h"
#include "ui_course3.h"

course3::course3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::course3)
{
    ui->setupUi(this);
}

course3::~course3()
{
    delete ui;
}
