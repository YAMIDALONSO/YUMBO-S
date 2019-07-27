#include "dialogaddproduct.h"
#include "ui_dialogaddproduct.h"

DialogAddProduct::DialogAddProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddProduct)
{
    ui->setupUi(this);
}

DialogAddProduct::~DialogAddProduct()
{
    delete ui;
}

QString DialogAddProduct::name() const{
    return ui->txtName->text();
}

int DialogAddProduct::units() const{
    return ui->spinAvailableUnits->value();
}

double DialogAddProduct::value() const{
    return ui->spinValue->value();
}

long DialogAddProduct::barcode() const{
    return  ui->spinBarCode->value();
}

QDate DialogAddProduct::expirationDate() const{
    return ui->expirationDate->date();
}
