#ifndef FLUGHAFENLEITSTELLEGUI_H
#define FLUGHAFENLEITSTELLEGUI_H

#include <QMainWindow>

namespace Ui {
class FlughafenLeitstelleGUI;
}

class FlughafenLeitstelleGUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit FlughafenLeitstelleGUI(QWidget *parent = 0);
    ~FlughafenLeitstelleGUI();

private:
    Ui::FlughafenLeitstelleGUI *ui;
};

#endif // FLUGHAFENLEITSTELLEGUI_H
