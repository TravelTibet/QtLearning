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

#include<QtWidgets>
#include <iostream>
using namespace std;
int main(int argc, char* argv[]) 
{
	QApplication a(argc, argv);
	QWidget w; 
	w.resize(300, 200);
	QPushButton* pb1 = new QPushButton("AAA", &w); 
	pb1->move(22, 22);
	QPushButton* pb2 = new QPushButton("BBB", &w);
	pb2->move(99, 22);
	cout << w.isVisible() << endl; //0，不可见
	cout << w.isHidden() << endl; //1，隐藏

	//在显示父部件之前按钮 pb1 的可见性与隐藏性;
	cout << pb1->isVisible() << endl; //0，不可见
	cout << pb1->isHidden() << endl; //0，非隐藏

	pb2->hide(); //明确隐藏按钮 pb2，此时在父部件 w 中，不会显示该按钮

	cout << "BBB=" << pb2->isVisible() << endl; //0，不可见
	cout << "BBB=" << pb2->isHidden() << endl; //1，隐藏
	// 这里AAA 不可见非隐藏 是因为没有调用show()，并非人为的隐藏！！

	w.show(); /*独立创建的窗口默认是不可见的，因此需调用 show()显示窗口 w，调用此函数后会使 w
	的子部件(即按钮 pb1)可见，但 pb2 不可见(因为 pb2 明确调用了 hide())*/

	//显示父部件之后按钮 pb1 的可见性与隐藏性
	cout << pb1->isVisible() << endl; //1，可见
	cout << pb1->isHidden() << endl; //0，非隐藏

	//在窗口 w 可见之后创建的子部件是不可见的，要使其可见需调用 show()函数。
	QPushButton* pb3 = new QPushButton("CCC", &w); 
	pb3->move(199, 22);
	cout << "CCC=" << pb3->isVisible() << endl; //0，不可见
	cout << "CCC=" << pb3->isHidden() << endl; //1，隐藏
	pb3->show();//使按钮 pb3 可见。
	cout << "1CCC=" << pb3->isVisible() << endl; //1，可见
	cout << "1CCC=" << pb3->isHidden() << endl; //0，非隐藏
	return a.exec();
}