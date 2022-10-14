#ifndef WELCOME_H
#define WELCOME_H

#include <QWidget>
#include "Run_the_Program_Ui/run_form.h"
#include "Robot_Program_ui/first_form.h"
#include "Initialize_Ui/initial_form.h"
#include "As_regards_Ui/version_form.h"

namespace Ui {
class welcome;
}

class welcome : public QWidget
{
    Q_OBJECT

public:
    explicit welcome(QWidget *parent = 0);
    ~welcome();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

private:
    Ui::welcome *ui;
    run *run_widget;
    first_form *first_form_widget;
    Initial_Form *Initial_Form_widget;
    version *version_form_widget;
};

#endif // WELCOME_H
