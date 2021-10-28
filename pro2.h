#ifndef PRO2_H
#define PRO2_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class pro2; }
QT_END_NAMESPACE

class pro2 : public QMainWindow
{
    Q_OBJECT

public:
    pro2(QWidget *parent = nullptr);
    ~pro2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::pro2 *ui;
};
#endif // PRO2_H
