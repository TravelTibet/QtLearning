//#include "QtLearning.h"
//#include <QtWidgets/QApplication>
//
//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    QtLearning w;
//    w.show();
//    return a.exec();
//}


//#include<QtWidgets> 
//int main(int argc, char* argv[]) 
//{
//	QApplication a(argc, argv);
//	QDialog d;
//	d.resize(333, 222);
//	QLabel t(&d, Qt::Window);
//	t.setText("AAA");
//	t.resize(111, 44);
//	t.move(50, 0);
//	t.show();
//	d.show();
//	QPushButton b;
//	b.resize(222, 111);
//	b.setText("BBB");
//	b.show();
//
//	QLabel t2(&d);
//	t2.setText("CCC");
//	t2.show();
//
//	return a.exec();
//}

//#include <QtWidgets>
//#include <iostream>
//using namespace std;
//int main(int argc, char* argv[])
//{
//	QApplication a(argc, argv);
//	QWidget w;
//	w.resize(300, 200);
//	w.showMaximized();
//	//w.move(50, 50);
//	//w.setGeometry(40, 140, 200, 400);
//	w.show();
//	return a.exec();
//}

//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//class A :public QWidget 
//{
//public:
//	//双击窗口时使窗口最大化，再次双击则还原。注意其中的异或运算
//	void mouseDoubleClickEvent(QMouseEvent* e)
//	{
//		setWindowState(windowState() ^ Qt::WindowMaximized);
//	}
//	//用于验证窗口的状态发生改变时会产生该事件(注意，调整窗口大小不会产生该事件)。
//	void changeEvent(QEvent* e) { cout << "CCC" << endl; }
//};
//int main(int argc, char* argv[]) 
//{
//	QApplication a(argc, argv);
//	A w;
//	QPushButton* pb1 = new QPushButton("Max", &w);
//	QPushButton* pb2 = new QPushButton("Min", &w);
//	QPushButton* pb3 = new QPushButton("Nor", &w);
//	pb1->move(22, 22); pb2->move(99, 22); pb3->move(22, 55);
//	//为按钮 pb1、pb2、pb3 的 clicked(单击)信号分别安装槽，即当单击并释放鼠标时会调用后面的槽函数。
//	QObject::connect(pb1, &QPushButton::clicked, &w, &QWidget::showMaximized);
//	QObject::connect(pb2, &QPushButton::clicked, &w, &QWidget::showMinimized);
//	QObject::connect(pb3, &QPushButton::clicked, &w, &QWidget::showNormal);
//	w.resize(300, 200);
//	w.showMaximized(); //首次显示以最大化形式显示窗口。
//	return a.exec();
//}

//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//int main(int argc, char* argv[]) 
//{
//	QApplication a(argc, argv);
//	QWidget w; 
//	w.resize(300, 200);
//	QPushButton* pb1 = new QPushButton("AAA", &w); 
//	pb1->move(22, 22);
//	QPushButton* pb2 = new QPushButton("BBB", &w);
//	pb2->move(99, 22);
//	cout << w.isVisible() << endl; //0，不可见
//	cout << w.isHidden() << endl; //1，隐藏
//
//	//在显示父部件之前按钮 pb1 的可见性与隐藏性;
//	cout << pb1->isVisible() << endl; //0，不可见
//	cout << pb1->isHidden() << endl; //0，非隐藏
//
//	pb2->hide(); //明确隐藏按钮 pb2，此时在父部件 w 中，不会显示该按钮
//
//	cout << "BBB=" << pb2->isVisible() << endl; //0，不可见
//	cout << "BBB=" << pb2->isHidden() << endl; //1，隐藏
//	// 这里AAA 不可见非隐藏 是因为没有调用show()，并非人为的隐藏！！
//
//	w.show(); /*独立创建的窗口默认是不可见的，因此需调用 show()显示窗口 w，调用此函数后会使 w
//	的子部件(即按钮 pb1)可见，但 pb2 不可见(因为 pb2 明确调用了 hide())*/
//
//	//显示父部件之后按钮 pb1 的可见性与隐藏性
//	cout << pb1->isVisible() << endl; //1，可见
//	cout << pb1->isHidden() << endl; //0，非隐藏
//
//	//在窗口 w 可见之后创建的子部件是不可见的，要使其可见需调用 show()函数。
//	QPushButton* pb3 = new QPushButton("CCC", &w); 
//	pb3->move(199, 22);
//	cout << "CCC=" << pb3->isVisible() << endl; //0，不可见
//	cout << "CCC=" << pb3->isHidden() << endl; //1，隐藏
//	pb3->show();//使按钮 pb3 可见。
//	cout << "1CCC=" << pb3->isVisible() << endl; //1，可见
//	cout << "1CCC=" << pb3->isHidden() << endl; //0，非隐藏
//	return a.exec();
//}

//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//class B :public QPushButton
//{
//	public: B(QString s = "", QWidget* p = 0) :QPushButton(s, p)
//	{}
//	void mousePressEvent(QMouseEvent* e) 
//	{
//		QWidget* pw = window(); //获取部件所属的窗口
//		B* s1 = pw->findChild<B*>("pb1"); //获取名称为 pb1 的按钮，此按钮会被设置为 pb2 的子部件
//		B* s2 = pw->findChild<B*>("pb2"); //此按钮在本例会作为 pb1 的父按钮部件
//		//QObject::findChild()函数，详见元对象系统章节。
//		if (objectName() == "pb") { //若按下的是按钮 pb
//			s1->setParent(s2); /*把 pb2 设置为 pb1 的父部件，即 pb1 会被移至 pb2，因此 pb1 此时会被
//			隐藏*/
//			cout << s1->objectName().toStdString() << endl; //输出 pb1
//			cout << s2->objectName().toStdString() << endl; //输出 pb2
//		}
//		s1->show(); //让按钮 pb1 再次显示出来
//	}
//};
//int main(int argc, char* argv[]) 
//{
//	QApplication a(argc, argv);
//	QWidget w; w.resize(300, 200);
//	B* pb = new B("AAA", &w);
//	B* pb1 = new B("BBB", &w); pb1->move(77, 0);
//	B* pb2 = new B("CCC", &w); pb2->move(44, 44); pb2->resize(200, 100);
//	B* pb3 = new B("DDD", pb2);
//	w.setObjectName("w"); pb->setObjectName("pb"); pb1->setObjectName("pb1");
//	pb2->setObjectName("pb2"); pb3->setObjectName("pb3");
//	w.show();
//	QWidget* pw = pb2->window();
//	QWidget* sw = pb3->parentWidget();
//	cout << pw->objectName().toStdString() << endl; //输出 w，pb2 所属的窗口为 w
//	cout << pb2->isWindow() << endl; //输出 0，pb2 虽是父部件，但不是窗口
//	cout << sw->objectName().toStdString() << endl; //输出 pb2
//	return a.exec();
//}

#include<QtWidgets>
#include <iostream>
using namespace std;
int main(int argc, char* argv[]) 
{
	QApplication a(argc, argv);
	//创建部件
	QWidget w;
	QToolButton* pb1 = new QToolButton(&w); 
	QToolButton* pb2 = new QToolButton(&w);

	pb1->setText("AAA"); //设置显示的文本
	//pb1->setIcon(QIcon("F:\\1.png")); //为工具按钮设置图标，图标来自于 F 盘的 1.png 文件。
	//pb1->setIconSize(QSize(44, 44));//图标大小需使用 QAbstractButton::setIconSize 函数设置。
	pb1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //工具按钮将文字显示于图标旁边。
	pb1->setAutoRaise(true); //为该工具按钮设置自动提升属性
	pb2->setArrowType(Qt::DownArrow); //此处设置的箭头会替换掉以下设置的图标
	//pb2->setIcon(QIcon("F:\\1.png"));
	//pb2->setIconSize(QSize(44, 44));

	pb1->move(22, 22); pb2->move(111, 22); // pb3->move(177,22);
	w.resize(300, 200);
	w.show();
	return a.exec();
}