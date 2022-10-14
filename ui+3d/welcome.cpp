#include "welcome.h"
#include "ui_welcome.h"

welcome::welcome(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::welcome)
{
    ui->setupUi(this);
    run_widget = new run();
    first_form_widget = new first_form();
    Initial_Form_widget = new Initial_Form();
    version_form_widget = new version();
}

welcome::~welcome()
{
    delete ui;
}
/**
 * @brief welcome::on_pushButton_2_clicked
 */

void welcome::on_pushButton_2_clicked()
{
    this->hide();
    run_widget->show();
}
/**
 * @brief welcome::on_pushButton_3_clicked
 */
void welcome::on_pushButton_3_clicked()
{
    this->hide();
    first_form_widget->show();
}
/**
 * @brief welcome::on_pushButton_4_clicked
 */
void welcome::on_pushButton_4_clicked()
{
    this->hide();
    Initial_Form_widget->show();
}
/**
 * @brief welcome::on_pushButton_clicked
 */
void welcome::on_pushButton_clicked()
{
    this->hide();
    version_form_widget->show();

}
