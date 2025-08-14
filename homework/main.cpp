#include <QApplication>
#include "mainwindow.h"
// 解决中文乱码（Qt Creator/VS 需确保文件编码为UTF-8）
#if _MSC_VER
# pragma execution_character_set("utf-8")
#endif

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow mainWindow;
    mainWindow.setWindowTitle("多区域界面示例");
    mainWindow.resize(1000, 700);
    mainWindow.show();

    return app.exec();
}
