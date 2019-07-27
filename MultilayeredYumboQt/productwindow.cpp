#include "productwindow.h"
#include "ui_productwindow.h"
#include "windowyumbo.h"
#include "dialogaddproduct.h"

ProductWindow::ProductWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProductWindow)
{
    ui->setupUi(this);

    QStringList titles;
    titles  << "Codigo de barras" << "Nombre" <<"Valor en $" << "Fecha de Vencimiento";
    ui->TabelOfProducts->setColumnCount(4);
    ui->TabelOfProducts->setHorizontalHeaderLabels(titles);
}

ProductWindow::~ProductWindow()
{
    delete ui;
}

void ProductWindow::on_btnHome_clicked()
{
    WindowYumbo *windowYumbo = new WindowYumbo();
    windowYumbo->showMaximized();
    hide();
}

void ProductWindow::on_btAddProduct_clicked()
{
    DialogAddProduct dialogAddProduct;
    dialogAddProduct.setModal(true);
    dialogAddProduct.exec();
}
