#ifndef BILLWINDOW_H
#define BILLWINDOW_H

#include <QWidget>

namespace Ui {
class BillWindow;
}

class BillWindow : public QWidget
{
    Q_OBJECT

public:
    explicit BillWindow(QWidget *parent = nullptr);
    ~BillWindow();

private slots:
    void on_btnHome_clicked();

private:
    Ui::BillWindow *ui;
};

#endif // BILLWINDOW_H
