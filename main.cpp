#include <QApplication>
#include "mainWindow.h"
#include <QFile>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QFile file(":/styles/main.qss");
    if (file.open(QFile::ReadOnly)) {
        QString styleSheet = QLatin1String(file.readAll());
        app.setStyleSheet(styleSheet);
    }
    
    MainWindow window;
    window.show();

    return app.exec();
}