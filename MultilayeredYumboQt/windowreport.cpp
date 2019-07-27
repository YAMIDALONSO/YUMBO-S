#include "windowreport.h"
#include "ui_windowreport.h"
#include "windowyumbo.h"

WindowReport::WindowReport(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowReport)
{
    ui->setupUi(this);
}

WindowReport::~WindowReport()
{
    delete ui;
}

void WindowReport::on_btnHome_clicked()
{
    WindowYumbo *windowYumbo = new WindowYumbo();
    windowYumbo->showMaximized();
    hide();
}
