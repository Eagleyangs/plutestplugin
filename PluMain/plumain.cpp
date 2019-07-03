#include "plumain.h"
#include "ui_plumain.h"

PluMain::PluMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PluMain)
{
    ui->setupUi(this);
}

PluMain::~PluMain()
{
    delete ui;
}
