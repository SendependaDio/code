#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{

}

void MainWindow::on_pushButton_clicked()
{
    QString name = ui->name->text();
    QString race = ui->race->text();
    QString sex = ui->sex->text();

    if(name == "Иван" && race == "человек" && sex == "вертолётик"){
        QMessageBox::information(this, "ХА!", "Как предсказуемо!");
    }else{
        QMessageBox::information(this, "Моё почтение!", "Какая неожиданность!");
    }
}
