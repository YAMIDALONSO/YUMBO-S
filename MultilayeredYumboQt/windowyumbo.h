#ifndef WINDOWYUMBO_H
#define WINDOWYUMBO_H

#include <QWidget>

namespace Ui {
class WindowYumbo;
}

class WindowYumbo : public QWidget
{
    Q_OBJECT

public:
    explicit WindowYumbo(QWidget *parent = nullptr);
    ~WindowYumbo();

private slots:
    void on_pushButton_clicked();

    void on_btnClients_clicked();

    void on_btnProducts_clicked();

    void on_btnProducts_2_clicked();

    void on_btnBills_clicked();

    void on_btnReports_clicked();

private:
    Ui::WindowYumbo *ui;
};

#endif // WINDOWYUMBO_H
