#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Устанавливаем размер основного окна
    this->setFixedSize(400, 300);

    // Создаем кнопку и устанавливаем её положение и размер
    button = new QPushButton("Click me", this);
    button->setGeometry(150, 130, 100, 50);
}

MainWindow::~MainWindow()
{
    // Очищаем выделенные ресурсы
    delete button;
}
