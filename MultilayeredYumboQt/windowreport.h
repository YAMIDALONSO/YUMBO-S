#ifndef WINDOWREPORT_H
#define WINDOWREPORT_H

#include <QWidget>

namespace Ui {
class WindowReport;
}

class WindowReport : public QWidget
{
    Q_OBJECT

public:
    explicit WindowReport(QWidget *parent = nullptr);
    ~WindowReport();

private slots:
    void on_btnHome_clicked();

private:
    Ui::WindowReport *ui;
};

#endif // WINDOWREPORT_H
