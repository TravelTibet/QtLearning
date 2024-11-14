//#pragma once
//
//#include <QtWidgets/QWidget>
//#include "ui_QtLearning.h"
//
//class QtLearning : public QWidget
//{
//    Q_OBJECT
//
//public:
//    QtLearning(QWidget *parent = nullptr);
//    ~QtLearning();
//
//private:
//    Ui::QtLearningClass ui;
//};

//#pragma once
//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//class B :public QPushButton {
//	Q_OBJECT
//public: B(QString s = "", QWidget* p = 0) :QPushButton(s, p) {}
//	//若重写以下事件处理函数，则使用该类创建的按钮，将不会发送 Qt 内置的信号(比如 clicked()等)
//	//void mousePressEvent(QMouseEvent *e){cout<<"D"<<endl;}
//public slots: //注：qt5.0 之后，可使用普通函数作为槽函数。
//	void f() { cout << "F" << endl; }
//};

//#pragma once
//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//class B :public QPushButton {
//	Q_OBJECT
//public: B(QString s = "", QWidget* p = 0) :QPushButton(s, p) {}
//public slots: 
//	void f() { cout << "F" << endl; }
//	void g() { animateClick(1000); } //执行动画点击，即按下按钮 4 秒之后，按钮才会被弹起。
//};

//#pragma once
//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//class B :public QPushButton {
//	Q_OBJECT
//public: B(QString s = "", QWidget* p = 0) :QPushButton(s, p) {}
//public slots: //注：qt5.0 之后，可使用普通函数作为槽函数。
//	void f() { cout << "F" << endl; } void g() { cout << "G" << endl; }
//	void h() { cout << "H" << endl; } void j() { cout << "J" << endl; }
//	void k() { cout << "K" << endl; }
//};

//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//class B :public QCheckBox {
//	Q_OBJECT
//public: B(QString s = "", QWidget* p = 0) :QCheckBox(s, p) {}
//public slots: 
//	void f() { cout << "F" << endl; }
//	void g() { cout << "G" << endl; }
//};


//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//class B :public QObject {
//	Q_OBJECT
//public slots: 
//	void f() {
//		cout << "No" << endl;
//		exit(1);
//	} //结束程序
//	void g() { cout << "Yes" << endl; }
//	void h() { cout << "Help" << endl; }
//	void j(QAbstractButton* b) { cout << "clicked" << endl; }
//};

////	按钮组
//#pragma once
//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//class B :public QButtonGroup {
//	Q_OBJECT
//public slots:
//	void f(QAbstractButton* b) {
//		int i = id(b); //获取按钮 b 的 id
//		QAbstractButton* c = checkedButton(); //获取当前被选中的按钮
//		cout << "id=" << i << endl;
//		cout << "button=" << c->objectName().toStdString() << endl;
//	}
//};

// QLabel

//#pragma once
//#include <QtWidgets>
//#include <iostream>
//using namespace std;
//class B :public QLabel
//{
//	Q_OBJECT
//public:
//	B(QString s, QWidget* p) :QLabel(s, p) {}
//public slots:
//	void f(const QString& k)
//	{
//		cout << "link = " << k.toStdString() << endl;
//		cout << selectedText().toStdString() << endl;
//	}
//};

//#include <QtWidgets>
//#include <iostream>
////using namespace std;
////class B :public QLabel
////{
////	Q_OBJECT
////public:
////	B(QString s, QWidget* p) :QLabel(s, p) {}
////public slots:
////	void f()
////	{
////		setScaledContents(hasScaledContents() ^ true);
//	//}
////};

// 图像绘制
//#include<QtWidgets>
//class B :public QWidget {
//	Q_OBJECT
//public: QPushButton* pb1; QPicture pc; QPixmap pm1; QImage pi;
//	B(QWidget* p1 = 0) :QWidget(p1) {
//		pb1 = new QPushButton("AAA", this); pb1->move(22, 111);
//		pb1->setShortcut(QKeySequence("Ctrl+F"));
//		QObject::connect(pb1, &QPushButton::clicked, this, &B::f1);
//	}
//	void paintEvent(QPaintEvent* e) {
//		QPainter pr;
//		//把图像绘制到 QWidget 部件上。函数 f1()只是创建了图像中的内容，但图像需要被显示出才会可见
//	   //比如设置为标签或按钮的图标，或者像本示例这样直接绘制出来
//		pr.begin(this);
//		pr.drawPixmap(11, 11, pm1); pr.drawImage(133, 11, pi); pr.drawPicture(244, 11, pc);
//	}
//public slots:
//	void f1() {
//		QPainter pr; QBrush bs(QColor(255, 255, 1));
//		/* QPixmap、QImage、QPicture 都是绘制设备，可在其上直接绘制图形，因为这些绘制设备都不是 QWidget
//		部件，因此可以不在 paintEvent()函数中绘制。*/
//		pm1.load("E:/Tom.png"); //加载一幅图片
//		pr.begin(&pm1); //开始在 pm1 上绘制图形
//		//pm1.load("F:/1s.png"); //注意：load()最好位于 begin()之前。
//		pr.drawLine(0, 0, 111, 111);
//		pr.end();
//		pi = QImage(QSize(111, 111), QImage::Format_RGB32);
//		pr.begin(&pi); pr.setBrush(bs); pr.drawRect(11, 11, 122, 122); pr.end();
//		pr.begin(&pc);
//		pr.setBrush(bs); //调用 begin()会重置 QPainter 为默认状态，因此需重新设置画刷。
//		pr.drawRect(11, 11, 99, 99); pr.drawArc(11, 11, 111, 111, 33 * 16, 144 * 16); pr.end();
//		repaint(); //立即重绘界面
//	}
//};
//#include<QtWidgets>
//class B :public QWidget {
//	Q_OBJECT //需要子类化 QWidget 部件
//public:
//	B(QWidget* p1 = 0) :QWidget(p1) { }
//	//需要重新实现该事件处理函数
//	void paintEvent(QPaintEvent* e) {
//		QPainter pr(this);
//		pr.drawLine(QPoint(11, 11), QPoint(111, 111));
//	} //绘制一直线
//};
