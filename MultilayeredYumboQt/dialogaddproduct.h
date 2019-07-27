#ifndef DIALOGADDPRODUCT_H
#define DIALOGADDPRODUCT_H

#include <QDialog>

namespace Ui {
class DialogAddProduct;
}

class DialogAddProduct : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddProduct(QWidget *parent = nullptr);
    ~DialogAddProduct();

    QString name() const;
    int units() const;
    double value() const;
    long barcode() const;
    QDate expirationDate() const;


private:
    Ui::DialogAddProduct *ui;
};

#endif // DIALOGADDPRODUCT_H
