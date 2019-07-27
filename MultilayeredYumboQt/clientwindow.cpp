#include "clientwindow.h"
#include "ui_clientwindow.h"
#include "windowyumbo.h"

ClientWindow::ClientWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientWindow)
{
    ui->setupUi(this);
}

ClientWindow::~ClientWindow()
{
    delete ui;
}

void ClientWindow::on_btnHome_clicked()
{
    WindowYumbo *windowYumbo = new WindowYumbo();
    windowYumbo->showMaximized();
    hide();
}
