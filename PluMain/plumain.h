#ifndef PLUMAIN_H
#define PLUMAIN_H

#include <QWidget>

namespace Ui {
class PluMain;
}

class PluMain : public QWidget
{
    Q_OBJECT

public:
    explicit PluMain(QWidget *parent = 0);
    ~PluMain();

private:
    Ui::PluMain *ui;
};

#endif // PLUMAIN_H
