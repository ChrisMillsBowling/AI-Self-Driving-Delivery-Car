#include "testdataform.h"
#include "ui_testdataform.h"

TestDataForm::TestDataForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestDataForm)
{
    ui->setupUi(this);
}

TestDataForm::~TestDataForm()
{
    delete ui;
}
