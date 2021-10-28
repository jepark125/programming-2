#ifndef COURSE3_H
#define COURSE3_H

#include <QDialog>

namespace Ui {
class course3;
}

class course3 : public QDialog
{
    Q_OBJECT

public:
    explicit course3(QWidget *parent = nullptr);
    ~course3();

private:
    Ui::course3 *ui;
};

#endif // COURSE3_H
