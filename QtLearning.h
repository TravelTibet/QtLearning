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
//	//����д�����¼�����������ʹ�ø��ഴ���İ�ť�������ᷢ�� Qt ���õ��ź�(���� clicked()��)
//	//void mousePressEvent(QMouseEvent *e){cout<<"D"<<endl;}
//public slots: //ע��qt5.0 ֮�󣬿�ʹ����ͨ������Ϊ�ۺ�����
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
//	void g() { animateClick(1000); } //ִ�ж�������������°�ť 4 ��֮�󣬰�ť�Żᱻ����
//};

//#pragma once
//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//class B :public QPushButton {
//	Q_OBJECT
//public: B(QString s = "", QWidget* p = 0) :QPushButton(s, p) {}
//public slots: //ע��qt5.0 ֮�󣬿�ʹ����ͨ������Ϊ�ۺ�����
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
//	} //��������
//	void g() { cout << "Yes" << endl; }
//	void h() { cout << "Help" << endl; }
//	void j(QAbstractButton* b) { cout << "clicked" << endl; }
//};

////	��ť��
//#pragma once
//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//class B :public QButtonGroup {
//	Q_OBJECT
//public slots:
//	void f(QAbstractButton* b) {
//		int i = id(b); //��ȡ��ť b �� id
//		QAbstractButton* c = checkedButton(); //��ȡ��ǰ��ѡ�еİ�ť
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