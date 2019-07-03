#include "plutest.h"
#include "ui_plutest.h"

PluTest::PluTest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PluTest)
{
    ui->setupUi(this);
}

PluTest::~PluTest()
{
    delete ui;
}
