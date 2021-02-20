#include "widget.h"
#include "QPushButton"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    //创建第一个按钮
    QPushButton* btn=new QPushButton;

    //show方法以顶层方式弹出控件,单个控件使用show方法会单独开出一个窗体
    //btn->show();

    //让btn对象依赖在主窗口中
    btn->setParent(this);

    //按钮上显示文本
    btn->setText("第一个按钮");

    //创建第二个按钮
    //这个构造函数可以在创建对象显示文本,并且将对象依赖在主窗口中
    //弊端就是主窗口会根据控件的大小改变主窗口的大小
    QPushButton* btn2=new QPushButton("第二个按钮",this);

    //重置主窗体的大小,设置宽和高
    resize(600,500);

    //移动按钮位置,设置坐标X轴和Y轴
    btn2->move(100,200);

    //重置按钮的大小
    btn2->resize(400,100);

    //设置主窗体标题
    setWindowTitle("第一个窗口");

    //设置固定大小,不允许用户拖拽大小
    setFixedSize(600,400);

    //点击按钮关闭窗口
    //参数1 信号的发送者 参数2 发送的信号(函数的地址) 参数3 信号的接收者 参数4 处理的槽函数
    connect(btn2,&QPushButton::clicked,this,&Widget::close);

}

Widget::~Widget()
{

}
