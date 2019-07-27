#ifndef CLIENTWINDOW_H
#define CLIENTWINDOW_H

#include <QWidget>

namespace Ui {
class ClientWindow;
}

class ClientWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ClientWindow(QWidget *parent = nullptr);
    ~ClientWindow();

private slots:
    void on_btnHome_clicked();

private:
    Ui::ClientWindow *ui;
};

#endif // CLIENTWINDOW_H
