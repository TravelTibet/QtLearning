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

// ͼ�����
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
//		//��ͼ����Ƶ� QWidget �����ϡ����� f1()ֻ�Ǵ�����ͼ���е����ݣ���ͼ����Ҫ����ʾ���Ż�ɼ�
//	   //��������Ϊ��ǩ��ť��ͼ�꣬������ʾ������ֱ�ӻ��Ƴ���
//		pr.begin(this);
//		pr.drawPixmap(11, 11, pm1); pr.drawImage(133, 11, pi); pr.drawPicture(244, 11, pc);
//	}
//public slots:
//	void f1() {
//		QPainter pr; QBrush bs(QColor(255, 255, 1));
//		/* QPixmap��QImage��QPicture ���ǻ����豸����������ֱ�ӻ���ͼ�Σ���Ϊ��Щ�����豸������ QWidget
//		��������˿��Բ��� paintEvent()�����л��ơ�*/
//		pm1.load("E:/Tom.png"); //����һ��ͼƬ
//		pr.begin(&pm1); //��ʼ�� pm1 �ϻ���ͼ��
//		//pm1.load("F:/1s.png"); //ע�⣺load()���λ�� begin()֮ǰ��
//		pr.drawLine(0, 0, 111, 111);
//		pr.end();
//		pi = QImage(QSize(111, 111), QImage::Format_RGB32);
//		pr.begin(&pi); pr.setBrush(bs); pr.drawRect(11, 11, 122, 122); pr.end();
//		pr.begin(&pc);
//		pr.setBrush(bs); //���� begin()������ QPainter ΪĬ��״̬��������������û�ˢ��
//		pr.drawRect(11, 11, 99, 99); pr.drawArc(11, 11, 111, 111, 33 * 16, 144 * 16); pr.end();
//		repaint(); //�����ػ����
//	}
//};
//#include<QtWidgets>
//class B :public QWidget {
//	Q_OBJECT //��Ҫ���໯ QWidget ����
//public:
//	B(QWidget* p1 = 0) :QWidget(p1) { }
//	//��Ҫ����ʵ�ָ��¼�������
//	void paintEvent(QPaintEvent* e) {
//		QPainter pr(this);
//		pr.drawLine(QPoint(11, 11), QPoint(111, 111));
//	} //����һֱ��
//};
