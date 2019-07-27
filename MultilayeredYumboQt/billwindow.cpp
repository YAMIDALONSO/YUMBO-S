#include "billwindow.h"
#include "ui_billwindow.h"
#include "windowyumbo.h"

BillWindow::BillWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BillWindow)
{
    ui->setupUi(this);
}

BillWindow::~BillWindow()
{
    delete ui;
}

void BillWindow::on_btnHome_clicked()
{
    WindowYumbo *windowYumbo = new WindowYumbo();
    windowYumbo->showMaximized();
    hide();
}
