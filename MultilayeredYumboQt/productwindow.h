#ifndef PRODUCTWINDOW_H
#define PRODUCTWINDOW_H

#include <QWidget>

namespace Ui {
class ProductWindow;
}

class ProductWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ProductWindow(QWidget *parent = nullptr);
    ~ProductWindow();

private slots:
    void on_btnHome_clicked();

    void on_btAddProduct_clicked();

private:
    Ui::ProductWindow *ui;
};

#endif // PRODUCTWINDOW_H
