#include "windowyumbo.h"
#include "ui_windowyumbo.h"
#include "clientwindow.h"
#include "productwindow.h"
#include "windowreport.h"
#include "billwindow.h"

WindowYumbo::WindowYumbo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowYumbo)
{
    ui->setupUi(this);

    showMaximized();
}

WindowYumbo::~WindowYumbo()
{
    delete ui;
}
void WindowYumbo::on_btnClients_clicked()
{
    ClientWindow *clientWindow = new ClientWindow();
    clientWindow->showMaximized();
    hide();
}

void WindowYumbo::on_btnProducts_clicked()
{
    ProductWindow *productWindow = new ProductWindow();
    productWindow->showMaximized();
    hide();
}

void WindowYumbo::on_btnBills_clicked()
{
    BillWindow *billWindow = new BillWindow();
    billWindow->showMaximized();
    hide();
}

void WindowYumbo::on_btnReports_clicked()
{
    WindowReport *windowReport = new WindowReport();
    windowReport->showMaximized();
    hide();
}
