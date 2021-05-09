#ifndef WIDGET_H
#define WIDGET_H

#include "widget.h"

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:


    void on_GetValuepushButton_clicked();

    void on_CaptureValuepushButton_clicked();

    void on_SetValuepushButton_clicked();

private:
    Ui::Widget *ui;
};

inline Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QStringList list;
    list <<"Fruits"<<"Apple"<<"Orange"<<"papaya"<<"JackFruit";
    ui->comboBox->setStyleSheet("background-color: rgb(0, 0, 0) ; color: rgb(0, 255, 255);");
    ui->comboBox->setEditable(true);
    for(int i=0;i<list.size();i++)
    {
        ui->comboBox->addItem(QIcon("C:/Users/samat/OneDrive/Documents/QComboBoxClass/icon.png"),list.at(i));
    }
}
#endif // WIDGET_H
