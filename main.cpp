#include "widget.h"
#include <QApplication>//包含一个应用程序类的头文件

//main程序入口 argc命令行变量的数量 argv命令行变量的数组
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//应用程序对象,在qt中有且仅有一个
    Widget w;//窗口对象
    w.show();//窗口对象默认不会显示,需要调用show方法才能显示

    //让程序对象进入消息循环机制
    //代码会阻塞在这一行,让窗口不会一闪而过,和system("pause")使控制台不会一闪而过一样
    return a.exec();
}

测试

