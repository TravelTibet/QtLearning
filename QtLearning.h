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