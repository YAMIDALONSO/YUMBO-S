#include "dialogaddperson.h"
#include "ui_dialogaddperson.h"

DialogAddPerson::DialogAddPerson(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddPerson)
{
    ui->setupUi(this);
}

DialogAddPerson::~DialogAddPerson()
{
    delete ui;
}
