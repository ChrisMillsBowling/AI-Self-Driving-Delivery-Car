#ifndef TESTDATAFORM_H
#define TESTDATAFORM_H

#include <QWidget>

namespace Ui {
class TestDataForm;
}

class TestDataForm : public QWidget
{
    Q_OBJECT

public:
    explicit TestDataForm(QWidget *parent = nullptr);
    ~TestDataForm();

private:
    Ui::TestDataForm *ui;
};

#endif // TESTDATAFORM_H
