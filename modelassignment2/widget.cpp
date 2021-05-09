#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include<QIcon>
#include<QStringList>



Widget::~Widget()
{
    delete ui;
}

void Widget::on_GetValuepushButton_clicked()
{
    qDebug()<<"The combo box currently has"<<QString::number(ui->comboBox->count())<<"Items.They are";
    for(int i=0;i<ui->comboBox->count();i++)
    {
     qDebug()<<"Index"<<QString::number(i)<<":"<<ui->comboBox->itemText(i);
    }
}

void Widget::on_CaptureValuepushButton_clicked()
{
    qDebug()<<"The currently chosen item is "<<ui->comboBox->currentText();
    qDebug()<<"\nThe index is "<<QString::number(ui->comboBox->currentIndex());

}

void Widget::on_SetValuepushButton_clicked()
{
   ui->comboBox->setCurrentIndex(2);
}
