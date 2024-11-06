//#include "QtLearning.h"
//
//QtLearning::QtLearning(QWidget *parent)
//    : QWidget(parent)
//{
//    ui.setupUi(this);
//}
//
//QtLearning::~QtLearning()
//{}

//#include "QtLearning.h"
//int main(int argc, char* argv[])
//{
//	QApplication a(argc, argv);
//	//创建部件
//	QWidget w; 
//	B* pb1 = new B("AAA", &w); B* pb11 = new B("AAA1", &w);
//	QCheckBox* pb2 = new QCheckBox("BBB", &w);
//	QCheckBox* pb3 = new QCheckBox("CCC", &w);
//	QCheckBox* pb4 = new QCheckBox("DDD", &w);
//
//	QRadioButton* pb5 = new QRadioButton("EEE", &w);
//	QRadioButton* pb6 = new QRadioButton("FFF", &w); //单选按钮默认具有排他性。
//	QCheckBox* pb7 = new QCheckBox("GGG", &w);
//	//布局各部件
//	pb1->move(22, 22); pb11->move(99, 22);
//	pb2->move(22, 77); pb3->move(99, 77); pb4->move(155, 77);
//	pb5->move(22, 122); pb6->move(99, 122); pb7->move(155, 122);
//
//	pb1->setAutoRepeat(true); //pb1 开启自动重复
//	pb1->setAutoRepeatDelay(1000); //设置初始延迟为 1 秒
//	pb1->setAutoRepeatInterval(500); //设置时间间隔为 2 秒
//	//把按钮 pb1 的 clicked 信号与槽 f 关联。
//	//QObject::connect(pb1, &QPushButton::released, pb1, &B::f);
//	QObject::connect(pb1, &QPushButton::clicked, pb1, &B::f);
//	pb2->setAutoExclusive(true); pb3->setAutoExclusive(true); //开启按钮的排他性
//	pb11->setDown(true); //设置为按下状态
//	pb7->setCheckable(false); //设置为不可选中。
//	w.resize(300, 200); w.show(); 
//	return a.exec();
//}

//#include "QtLearning.h"
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	//创建部件
//	QWidget w; B* pb1 = new B("AAA", &w); B* pb11 = new B("AAA1", &w);
//	QCheckBox* pb2 = new QCheckBox("BBB", &w);
//	//布局各部件
//	pb1->move(22, 22); pb11->move(99, 22); pb2->move(22, 77);
//	//把各按钮与相应的槽关联。
//	QObject::connect(pb1, &QPushButton::clicked, pb2, &QCheckBox::toggle);
//	QObject::connect(pb2, &QCheckBox::toggled, pb1, &B::f);
//	QObject::connect(pb11, &QPushButton::pressed, pb1, &B::g);
//	w.resize(300, 200); w.show(); return a.exec();
//}

//#include "Qtlearning.h"
//int main(int argc, char* argv[]) 
//{
//	QApplication a(argc, argv);
//
//	//QWidget w;
//	QDialog w; //默认按钮只在对话框中有效。读者可使用 QWidget 进行验证。
//	B* pb1 = new B("AAA", &w); B* pb2 = new B("BBB", &w); B* pb3 = new B("CCC", &w);
//	B* pb4 = new B("DDD", &w); B* pb5 = new B("EEE", &w);
//	QCheckBox* pb6 = new QCheckBox("XXX", &w);
//	pb2->setDefault(true); //设置 pb2 为默认按钮。
//	pb3->setAutoDefault(0); //取消 pb3 的自动默认按钮属性
//	pb4->setFlat(true); //设置 pb4 的 flat 属性为 true。
//	// pb5->setAutoDefault(0); //错误 pb5 不是 QPushButton，不能设置自动默认按钮
//	cout << pb1->autoDefault() << endl; //输出 1。对话框中的按钮默认具有自动默认按钮属性
//	cout << pb1->isDefault() << endl; //输出 0。
//	//布局各部件
//	pb1->move(22, 22); pb2->move(99, 22); pb3->move(177, 22);
//	pb4->move(22, 77); pb5->move(99, 77); pb6->move(177, 77);
//	//验证默认按钮和自动默认按钮，需要使用信号和槽机制。
//	QObject::connect(pb1, &QPushButton::clicked, pb1, &B::f);
//	QObject::connect(pb2, &QPushButton::clicked, pb2, &B::g);
//	QObject::connect(pb3, &QPushButton::clicked, pb3, &B::h);
//	QObject::connect(pb4, &QPushButton::clicked, pb4, &B::j);
//	QObject::connect(pb5, &QPushButton::clicked, pb5, &B::k);
//	w.resize(300, 200); w.show(); return a.exec();
//}

//int main(int argc, char* argv[]) 
//{
//	QApplication a(argc, argv);
//	QWidget w; B* pb1 = new B("AAA", &w); B* pb2 = new B("BBB", &w); B* pb3 = new B("CCC", &w);
//	pb1->move(22, 22); pb2->move(99, 22); pb3->move(177, 22);
//	//注意以下两函数的区别
//	pb1->setTristate(true); //开启按钮 pb1 的第三状态
//	pb2->setCheckState(Qt::PartiallyChecked); //设置按钮 pb2 的状态为第三状态。
//	//把按钮的信号与槽关联。
//	QObject::connect(pb1, &QCheckBox::toggled, pb1, &B::f);
//	QObject::connect(pb1, &QCheckBox::stateChanged, pb1, &B::g);
//	w.resize(300, 200); w.show(); return a.exec();
//}

//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	//创建部件
//	QWidget w;
//	QToolButton* pb1 = new QToolButton(&w); QToolButton* pb2 = new QToolButton(&w);
//	pb1->setText("AAA"); //设置显示的文本
//	pb1->setIcon(QIcon("F:\\1.png")); //为工具按钮设置图标，图标来自于 F 盘的 1.png 文件。
//	pb1->setIconSize(QSize(44, 44);//图标大小需使用 QAbstractButton::setIconSize 函数设置。
//	pb1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //工具按钮将文字显示于图标旁边。
//	pb1->setAutoRaise(true); //为该工具按钮设置自动提升属性
//	pb2->setArrowType(Qt::UpArrow); //此处设置的箭头会替换掉以下设置的图标
//	pb2->setIcon(QIcon("F:\\1.png"));
//	pb2->setIconSize(QSize(44, 44));
//
//	pb1->move(22, 22); pb2->move(111, 22); // pb3->move(177,22);
//	w.resize(300, 200); w.show(); return a.exec();
//}