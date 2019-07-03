#ifndef PLUTEST_H
#define PLUTEST_H

#include <QWidget>

namespace Ui {
class PluTest;
}

class PluTest : public QWidget
{
    Q_OBJECT

public:
    explicit PluTest(QWidget *parent = 0);
    ~PluTest();

private:
    Ui::PluTest *ui;
};

#endif // PLUTEST_H
