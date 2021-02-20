#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>//包含头文件,QWidget是一个窗口类的头文件

class Widget : public QWidget//继承
{
    Q_OBJECT//这是一个宏,运行类中使用信号和槽机制

public:
    Widget(QWidget *parent = 0);//构造函数
    ~Widget();
};

#endif // WIDGET_H
