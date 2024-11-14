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

//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//int main(int argc, char* argv[]) 
//{
//	QApplication a(argc, argv);
//	//创建部件
//	QWidget w;
//	QToolButton* pb1 = new QToolButton(&w); 
//	QToolButton* pb2 = new QToolButton(&w);
//
//	pb1->setText("AAA"); //设置显示的文本
//	//pb1->setIcon(QIcon("F:\\1.png")); //为工具按钮设置图标，图标来自于 F 盘的 1.png 文件。
//	//pb1->setIconSize(QSize(44, 44));//图标大小需使用 QAbstractButton::setIconSize 函数设置。
//	pb1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //工具按钮将文字显示于图标旁边。
//	pb1->setAutoRaise(true); //为该工具按钮设置自动提升属性
//	pb2->setArrowType(Qt::DownArrow); //此处设置的箭头会替换掉以下设置的图标
//	//pb2->setIcon(QIcon("F:\\1.png"));
//	//pb2->setIconSize(QSize(44, 44));
//
//	pb1->move(22, 22); pb2->move(111, 22); // pb3->move(177,22);
//	w.resize(300, 200);
//	w.show();
//	return a.exec();
//}

//组框

//#include<QtWidgets>
//#include <iostream>
//
//#pragma execution_character_set("utf-8")
//
//using namespace std;
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	QWidget w;
//	QGroupBox* box = new QGroupBox(&w); box->move(33, 33); box->resize(120, 150);
//	QGroupBox* box1 = new QGroupBox(&w); box1->move(165, 33); box1->resize(110, 75);
//	QButtonGroup* b = new QButtonGroup; //按钮组
//	//把按钮加入到组框
//	QRadioButton* rb1 = new QRadioButton("AAA", box);
//	QRadioButton* rb2 = new QRadioButton("BBB", box);
//	QCheckBox* cb1 = new QCheckBox("CCC", box); QCheckBox* cb2 = new QCheckBox("DDD", box);
//	QCheckBox* cb3 = new QCheckBox("EEE", box1); QCheckBox* cb4 = new QCheckBox("FFF", box1);
//	//QRadioButton* rb3 = new QRadioButton("GGG",box1);
//	//rb3->show();
//	//将属于同一组的按钮加入到按钮组 b
//	b->addButton(rb1); b->addButton(rb2); b->addButton(cb1, 2); b->addButton(cb2);
//	//布局组框 box 中的子部件
//	rb1->move(22, 22); rb2->move(22, 50); cb1->move(22, 77); cb2->move(22, 105);
//	//rb1->move(0, 22); rb2->move(0, 50); cb1->move(0, 77); cb2->move(0, 105);
//	//布局组框 box1 中的子部件
//	cb3->move(22, 11); cb4->move(22, 40);
//	box->setTitle("XXXXX"); //设置标题
//	box->setAlignment(Qt::AlignHCenter); //居中显示标题
//	box->setCheckable(true); //组框 box 可被选中
//	box1->setTitle("控制");
//	//box1->setFlat(true); //组框 box1 无边框
//	w.resize(300, 200); w.show(); return a.exec();
//}

// QFrame

//#include<QtWidgets>
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	QFrame pf; pf.resize(200, 150);
//	pf.setFrameShadow(QFrame::Sunken); pf.setFrameShape(QFrame::Box);
//	pf.setLineWidth(10); //设置线宽，若该值太小，则 3D 效果不明显
//	pf.setFrameRect(QRect(22, 22, 150, 100));
//	pf.show(); return a.exec();
//}
//#include<QtWidgets>
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	QWidget w; w.resize(300, 200);
//	QFrame* pf = new QFrame(&w); pf->resize(200, 150);
//	pf->setFrameShadow(QFrame::Sunken); pf->setFrameShape(QFrame::Box);
//	pf->setLineWidth(10);//设置线宽，若该值太小，则 3D 效果不明显
//	pf->setFrameRect(QRect(22, 22, 150, 100));//QRect(0,0,0,0)是指的 pf->rect()而不是 w.rect()
//	w.show(); return a.exec();
//}

//QLabel

//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	QWidget w;
//	/*Qt 会自动检测到以下标签为富文本，该文本会被显示为具有网页链接的蓝色，以下内容以 HTML 语言
//   规范解释为：把字符串“AAAA….kkkk”链接到网址 http://aaa */
//	QLabel* pb = new QLabel("<a href=http://aaa>AAAA bbbb cccc dddd eeee ffff gggg kkkk</a>", &w);
//	//设置标签边框样式，以使其看起来比较明显
//	pb->setFrameStyle(QFrame::Box | QFrame::Raised); pb->setLineWidth(5);
//	//pb->move(22, 22); pb->resize(155, 86); //设置标签位置及大小
//	pb->move(22, 22); 
//	pb->resize(155, 100); //设置标签位置及大小
//	pb->setMargin(15); //设置页边距为 15
//	pb->setIndent(14); //设置缩进量为 14(本例相对于左侧边缘，因为是左对齐的)
//	pb->setWordWrap(true); //设置文本在合适位置自动换行
//	//以下标签不能自动换行，也没缩进量和页边距，且以纯文本形式显示
//	QLabel* pb1 = new QLabel("<a href=http://aaa>AAAA fff ggg</a>", &w);
//	pb1->setFrameStyle(QFrame::Box | QFrame::Raised); pb1->setLineWidth(5);
//	pb1->move(22, 133); 
//	pb1->resize(222, 30);
//	pb1->setTextFormat(Qt::PlainText); //使标签文本以纯文本形式显式
//	w.resize(300, 200); w.show(); return a.exec();
//}

// Led 数字显示

//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	QWidget w;
//	QLCDNumber* pn = new QLCDNumber(&w);
//	pn->move(22, 22); pn->resize(222, 44);
//	pn->setDigitCount(7); /*设置显示的位数，该函数应位于 display 函数之前，否则该函数的设置会
//   不起作用。*/
//	pn->display(1245555345.2275687); //太大的浮点数会以科学计数的形式显示
//	QLCDNumber* pn1 = new QLCDNumber(&w);
//	pn1->move(22, 77); pn1->resize(222, 44);
//	pn1->setSegmentStyle(QLCDNumber::Flat);
//	pn1->setDigitCount(20);
//	pn1->display("1234");
//	cout << pn1->value() << endl; //输出 1234
//	QLCDNumber* pn2 = new QLCDNumber(&w);
//	pn2->move(22, 122); pn2->resize(222, 44);
//	pn2->display("0x1a3"); /*试图以 16 进制形式显示后面的数值 1a3，但不会成功，因为 0x1a3 会被当
//   作字符串显示，其中 x 无法显示，会被空格代替。*/
//	cout << pn2->value() << endl; //输出 0，因为 pn2 显示的"0 1A3"不是有效数字。
//	w.resize(300, 200);
//	w.show();
//	return a.exec();
//}

//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	QWidget w;
//	QPushButton* pb = new QPushButton("Fixed");
//	QPushButton* pb1 = new QPushButton("MaxSetMin");
//	QPushButton* pb2 = new QPushButton("MaxNoMin");
//	//每部件设置大小策略
//	pb->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
//	pb1->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
//	pb2->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
//	QHBoxLayout* pg = new QHBoxLayout;
//	pb->resize(222, 222); //使用布局后，resize 函数将不再起作用
//	pb->setMinimumWidth(11); pb->setMaximumWidth(188); //为 pb 设置最大/最小大小
//	pb1->setMinimumWidth(1); //为 pb1 设置最小大小
//	pg->addWidget(pb); pg->addWidget(pb1); pg->addWidget(pb2); w.setLayout(pg);
//	w.resize(300, 200); w.show(); return a.exec();
//}

// QDataStream

//#include<QtWidgets>
//class B
//{
//public:
//	int a; 
//}; //自定义类
//int main(int argc, char* argv[])
//{
//	QApplication aa(argc, argv);
//	QWidget w; QPushButton* pb = new QPushButton("AAA", &w);
//	QFile f("E://1.txt"); f.open(QIODevice::WriteOnly); //①、以只写方式打开文本 1.txt
//	QIcon i("E://Tom.png"); QPoint p(22, 22); //准备读/写的两个对象 i 和 p
//	B mb; mb.a = 1; //自定义类型的对象
//	QDataStream out(&f); //②、创建 QDataStream 对象并与 QFile 对象关联
//	out << i << QString("BBB") << p; //③、把对象 i，字符串 BBB 和对象 p 存入文件 1.txt 中，
//	//读者可在 F 盘下找到 1.txt 文件以查看文件中的内容。
//	//out<<mb; //错误，读/写自定义类型需重载>>和<<运算符(其方法详见后文)
//	f.close(); //关闭文件
//	f.open(QIODevice::ReadOnly); //④、以只读方式重读打开文本 1.txt，以读取其内容
//	QIcon i1; QString s; QPoint p1; //这些对象用于存储从文件读入的对象。
//	QDataStream in(&f); //⑤、创建 QDataStream 对象并与 QFile 对象关联
//	in >> i1 >> s >> p1; //⑥、把文件 1.txt 的内容读出并存储到 i1、s 和 p1 中，
//	//注意，读取数据类型的顺序应与写入时的一致 
//	//使用从文件读取到的数据设置按钮的图标，文本和位置
//	pb->setIcon(i1); pb->setText(s); pb->move(p1);
//	f.close(); w.resize(400, 333); w.show(); return aa.exec();
//}

// QScrollArea
//#include<QtWidgets>
//int main(int argc, char* argv[]) {
//	QApplication app(argc, argv);
//	QWidget* pw = new QWidget; //创建一个容器
//	QLabel* pb = new QLabel;
//	pb->setPixmap(QPixmap("E://Tom.png")); //把图片加载到标签中
//	QPushButton* pb1 = new QPushButton("AAA");
//	QPushButton* pb2 = new QPushButton("BBB");
//	pb1->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed); //设置大小策略。
//	//布局容器 pw 的部件
//	QVBoxLayout* pv = new QVBoxLayout; //主布局
//	QHBoxLayout* ph = new QHBoxLayout;
//	ph->addWidget(pb1); ph->addWidget(pb2);
//	pv->addWidget(pb); pv->addLayout(ph);
//	pw->setLayout(pv); //此语句应位于 ps.setWidget(pw);之前。
//	//pw->show();
//	//设置容器 pw 的背景色为红色
//	QPalette p1; p1.setColor(QPalette::Window, QColor(111, 1, 1));
//	pw->setPalette(p1);
//	QScrollArea ps; /*创建一个滚动区域，记住，QScrollArea 的祖先是 QWidget，因此，还
//	可以像使用 QWidget 一样来使用 QScrollArea。*/
//	ps.setWidget(pw);
//	//设置滚动区域 ps 的背景色为蓝色
//	QPalette p2; p2.setColor(QPalette::Window, QColor(1, 111, 1));
//	ps.setPalette(p2);
//	//在调用 show()显示 QScrollArea 之前需为子部件设置大小，否则子部件会不可见。
//	pw->resize(333, 222);
//	/*若 widgetResizable 属性为 true，还必须设置最小大小，此时，即使使用 resize()设置了子部件大
//	小，子部件也会不可见。*/
//	pw->setMinimumSize(333, 222);
//	ps.show(); //显示 QScrollArea，也可把 ps 作为子部件添加到其他部件中。
//	//#########################
//	//以下部分内容用于验证视口部件，不是必须代码
//	QWidget* pw1 = ps.viewport(); //获取 ps 的视口
//	//以下语句视情况修改为 0 或 1，用于填充背景，若为 0 背景将透明。
//	pw1->setAutoFillBackground(0);
//	QPalette p3; p3.setColor(QPalette::Window, QColor(1, 1, 111));
//	pw1->setPalette(p3); //设置视口的背景色。
//	return app.exec();
//}

////QTime
//#include<QtWidgets>
//#include <QDebug>
//int main(int argc, char* argv[])
//{
//	QApplication a(argc, argv);
//	QTime  date = QTime::currentTime();
//	qDebug() << date.toString();
//
//	return a.exec();
//}

//#include "QtLearning.h"
//int main(int argc, char* argv[]) {
//	QApplication app(argc, argv);
//	B w; w.resize(444, 333); w.show(); return app.exec();
//}
//#include "QtLearning.h"
//int main(int argc, char* argv[]) {
//	QApplication app(argc, argv);
//	B w; w.resize(444, 333); w.show(); return app.exec();
//}

// 验证器
//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	QWidget w;
//	QLineEdit* pe1 = new QLineEdit(&w); pe1->move(22, 22); pe1->resize(77, 22);
//	QIntValidator* vi = new QIntValidator(10, 900, &w); //使整数范围位于 10~900 之间。
//	pe1->setValidator(vi); /*安装验证器 vi 后，pe1 将只能输出比 900 更小的整数，且不能输入字母
//   等非数字。*/
//	QString s = "1111"; int i = 0;
//	cout << vi->validate(s, i) << endl; //输出 0，s 表示的字符串是无效整数。
//	QLineEdit* pe2 = new QLineEdit(&w); pe2->move(111, 22); pe2->resize(77, 22);
//	QDoubleValidator* vd = new QDoubleValidator(1, 11, 3, &w);
//	vd->setNotation(QDoubleValidator::StandardNotation); /*使用标准方式表示浮点数，否则即使输
//   入很大的浮点数也不会超出范围(因为可更改指数使其变为有效)*/
//	pe2->setValidator(vd); //安装验证器
//	w.resize(300, 200); w.show(); return a.exec();
//}
//#include "A.h"
//
//int main()
//{
//    CircularQueue* pQueue = new CircularQueue();
//    std::string enter;
//
//    while (true)
//    {
//        std::cout << "请输入 1 表示 入队，2表示出队, -1 退出" << std::endl;
//        std::cin >> enter;
//
//        if (enter == "1")
//        {
//            std::cout << "请输入入队内容：" << std::endl;
//            int data;
//            std::cin >> data;
//            pQueue->enQueue(data);
//        }
//        else if (enter == "2")
//        {
//            pQueue->deQueue();
//        }
//        else if (enter == "-1")
//        {
//            break;
//        }
//        else
//        {
//            std::cout << "无效输入，请重新输入！" << std::endl;
//        }
//        int a = 1;//用来断点
//    }
//
//    delete pQueue;  // 释放动态分配的内存
//    return 0;
//}
#include <opencv2/opencv.hpp>
#include <QImage>
int main()
{
	cv::Mat pic = cv::imread("D://learning//test//QtLearning//pic//tom.png");
	cv::imshow("666", pic);
	cv::waitKey(0);
	return 0;
}