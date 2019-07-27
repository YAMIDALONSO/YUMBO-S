#ifndef DIALOGADDPERSON_H
#define DIALOGADDPERSON_H

#include <QDialog>

namespace Ui {
class DialogAddPerson;
}

class DialogAddPerson : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddPerson(QWidget *parent = nullptr);
    ~DialogAddPerson();

private:
    Ui::DialogAddPerson *ui;
};

#endif // DIALOGADDPERSON_H
