#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton> 

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);  // Конструктор
    ~MainWindow();  // Деструктор

private:
    QPushButton *button;  // Указатель на объект интерфейса
};

#endif // MAINWINDOW_H
