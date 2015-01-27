#include "flughafenleitstellegui.h"
#include "ui_flughafenleitstellegui.h"

FlughafenLeitstelleGUI::FlughafenLeitstelleGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FlughafenLeitstelleGUI)
{
    ui->setupUi(this);
}

FlughafenLeitstelleGUI::~FlughafenLeitstelleGUI()
{
    delete ui;
}
