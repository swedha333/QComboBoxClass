#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include<QIcon>
#include<QStringList>


Widget::Widget(QWidget *parent)
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

       ui->comboBox->addItem(QIcon("C:/Users/muthu/Downloads/cb.jpeg"),list.at(i));

   }
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_capturevalues_clicked()
{
    qDebug()<<"The currently chosen item is "<<ui->comboBox->currentText();
       qDebug()<<"\nThe index is "<<QString::number(ui->comboBox->currentIndex());

}

void Widget::on_setvalues_clicked()
{
    ui->comboBox->setCurrentIndex(2);
    qDebug()<<"The item is changed to Index(2)-Orange";

}

void Widget::on_getvalues_clicked()
{
    qDebug()<<"The combo box currently has"<<QString::number(ui->comboBox->count())<<"Items.They are";

        for(int i=0;i<ui->comboBox->count();i++)

        {

            qDebug()<<"Index"<<QString::number(i)<<":"<<ui->comboBox->itemText(i);

        }
}
