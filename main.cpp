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
//	//˫������ʱʹ������󻯣��ٴ�˫����ԭ��ע�����е��������
//	void mouseDoubleClickEvent(QMouseEvent* e)
//	{
//		setWindowState(windowState() ^ Qt::WindowMaximized);
//	}
//	//������֤���ڵ�״̬�����ı�ʱ��������¼�(ע�⣬�������ڴ�С����������¼�)��
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
//	//Ϊ��ť pb1��pb2��pb3 �� clicked(����)�źŷֱ�װ�ۣ������������ͷ����ʱ����ú���Ĳۺ�����
//	QObject::connect(pb1, &QPushButton::clicked, &w, &QWidget::showMaximized);
//	QObject::connect(pb2, &QPushButton::clicked, &w, &QWidget::showMinimized);
//	QObject::connect(pb3, &QPushButton::clicked, &w, &QWidget::showNormal);
//	w.resize(300, 200);
//	w.showMaximized(); //�״���ʾ�������ʽ��ʾ���ڡ�
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
//	cout << w.isVisible() << endl; //0�����ɼ�
//	cout << w.isHidden() << endl; //1������
//
//	//����ʾ������֮ǰ��ť pb1 �Ŀɼ�����������;
//	cout << pb1->isVisible() << endl; //0�����ɼ�
//	cout << pb1->isHidden() << endl; //0��������
//
//	pb2->hide(); //��ȷ���ذ�ť pb2����ʱ�ڸ����� w �У�������ʾ�ð�ť
//
//	cout << "BBB=" << pb2->isVisible() << endl; //0�����ɼ�
//	cout << "BBB=" << pb2->isHidden() << endl; //1������
//	// ����AAA ���ɼ������� ����Ϊû�е���show()��������Ϊ�����أ���
//
//	w.show(); /*���������Ĵ���Ĭ���ǲ��ɼ��ģ��������� show()��ʾ���� w�����ô˺������ʹ w
//	���Ӳ���(����ť pb1)�ɼ����� pb2 ���ɼ�(��Ϊ pb2 ��ȷ������ hide())*/
//
//	//��ʾ������֮��ť pb1 �Ŀɼ�����������
//	cout << pb1->isVisible() << endl; //1���ɼ�
//	cout << pb1->isHidden() << endl; //0��������
//
//	//�ڴ��� w �ɼ�֮�󴴽����Ӳ����ǲ��ɼ��ģ�Ҫʹ��ɼ������ show()������
//	QPushButton* pb3 = new QPushButton("CCC", &w); 
//	pb3->move(199, 22);
//	cout << "CCC=" << pb3->isVisible() << endl; //0�����ɼ�
//	cout << "CCC=" << pb3->isHidden() << endl; //1������
//	pb3->show();//ʹ��ť pb3 �ɼ���
//	cout << "1CCC=" << pb3->isVisible() << endl; //1���ɼ�
//	cout << "1CCC=" << pb3->isHidden() << endl; //0��������
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
//		QWidget* pw = window(); //��ȡ���������Ĵ���
//		B* s1 = pw->findChild<B*>("pb1"); //��ȡ����Ϊ pb1 �İ�ť���˰�ť�ᱻ����Ϊ pb2 ���Ӳ���
//		B* s2 = pw->findChild<B*>("pb2"); //�˰�ť�ڱ�������Ϊ pb1 �ĸ���ť����
//		//QObject::findChild()���������Ԫ����ϵͳ�½ڡ�
//		if (objectName() == "pb") { //�����µ��ǰ�ť pb
//			s1->setParent(s2); /*�� pb2 ����Ϊ pb1 �ĸ��������� pb1 �ᱻ���� pb2����� pb1 ��ʱ�ᱻ
//			����*/
//			cout << s1->objectName().toStdString() << endl; //��� pb1
//			cout << s2->objectName().toStdString() << endl; //��� pb2
//		}
//		s1->show(); //�ð�ť pb1 �ٴ���ʾ����
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
//	cout << pw->objectName().toStdString() << endl; //��� w��pb2 �����Ĵ���Ϊ w
//	cout << pb2->isWindow() << endl; //��� 0��pb2 ���Ǹ������������Ǵ���
//	cout << sw->objectName().toStdString() << endl; //��� pb2
//	return a.exec();
//}

//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//int main(int argc, char* argv[]) 
//{
//	QApplication a(argc, argv);
//	//��������
//	QWidget w;
//	QToolButton* pb1 = new QToolButton(&w); 
//	QToolButton* pb2 = new QToolButton(&w);
//
//	pb1->setText("AAA"); //������ʾ���ı�
//	//pb1->setIcon(QIcon("F:\\1.png")); //Ϊ���߰�ť����ͼ�꣬ͼ�������� F �̵� 1.png �ļ���
//	//pb1->setIconSize(QSize(44, 44));//ͼ���С��ʹ�� QAbstractButton::setIconSize �������á�
//	pb1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //���߰�ť��������ʾ��ͼ���Աߡ�
//	pb1->setAutoRaise(true); //Ϊ�ù��߰�ť�����Զ���������
//	pb2->setArrowType(Qt::DownArrow); //�˴����õļ�ͷ���滻���������õ�ͼ��
//	//pb2->setIcon(QIcon("F:\\1.png"));
//	//pb2->setIconSize(QSize(44, 44));
//
//	pb1->move(22, 22); pb2->move(111, 22); // pb3->move(177,22);
//	w.resize(300, 200);
//	w.show();
//	return a.exec();
//}

//���

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
//	QButtonGroup* b = new QButtonGroup; //��ť��
//	//�Ѱ�ť���뵽���
//	QRadioButton* rb1 = new QRadioButton("AAA", box);
//	QRadioButton* rb2 = new QRadioButton("BBB", box);
//	QCheckBox* cb1 = new QCheckBox("CCC", box); QCheckBox* cb2 = new QCheckBox("DDD", box);
//	QCheckBox* cb3 = new QCheckBox("EEE", box1); QCheckBox* cb4 = new QCheckBox("FFF", box1);
//	//QRadioButton* rb3 = new QRadioButton("GGG",box1);
//	//rb3->show();
//	//������ͬһ��İ�ť���뵽��ť�� b
//	b->addButton(rb1); b->addButton(rb2); b->addButton(cb1, 2); b->addButton(cb2);
//	//������� box �е��Ӳ���
//	rb1->move(22, 22); rb2->move(22, 50); cb1->move(22, 77); cb2->move(22, 105);
//	//rb1->move(0, 22); rb2->move(0, 50); cb1->move(0, 77); cb2->move(0, 105);
//	//������� box1 �е��Ӳ���
//	cb3->move(22, 11); cb4->move(22, 40);
//	box->setTitle("XXXXX"); //���ñ���
//	box->setAlignment(Qt::AlignHCenter); //������ʾ����
//	box->setCheckable(true); //��� box �ɱ�ѡ��
//	box1->setTitle("����");
//	//box1->setFlat(true); //��� box1 �ޱ߿�
//	w.resize(300, 200); w.show(); return a.exec();
//}

// QFrame

//#include<QtWidgets>
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	QFrame pf; pf.resize(200, 150);
//	pf.setFrameShadow(QFrame::Sunken); pf.setFrameShape(QFrame::Box);
//	pf.setLineWidth(10); //�����߿�����ֵ̫С���� 3D Ч��������
//	pf.setFrameRect(QRect(22, 22, 150, 100));
//	pf.show(); return a.exec();
//}
//#include<QtWidgets>
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	QWidget w; w.resize(300, 200);
//	QFrame* pf = new QFrame(&w); pf->resize(200, 150);
//	pf->setFrameShadow(QFrame::Sunken); pf->setFrameShape(QFrame::Box);
//	pf->setLineWidth(10);//�����߿�����ֵ̫С���� 3D Ч��������
//	pf->setFrameRect(QRect(22, 22, 150, 100));//QRect(0,0,0,0)��ָ�� pf->rect()������ w.rect()
//	w.show(); return a.exec();
//}

//QLabel

//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	QWidget w;
//	/*Qt ���Զ���⵽���±�ǩΪ���ı������ı��ᱻ��ʾΪ������ҳ���ӵ���ɫ������������ HTML ����
//   �淶����Ϊ�����ַ�����AAAA��.kkkk�����ӵ���ַ http://aaa */
//	QLabel* pb = new QLabel("<a href=http://aaa>AAAA bbbb cccc dddd eeee ffff gggg kkkk</a>", &w);
//	//���ñ�ǩ�߿���ʽ����ʹ�俴�����Ƚ�����
//	pb->setFrameStyle(QFrame::Box | QFrame::Raised); pb->setLineWidth(5);
//	//pb->move(22, 22); pb->resize(155, 86); //���ñ�ǩλ�ü���С
//	pb->move(22, 22); 
//	pb->resize(155, 100); //���ñ�ǩλ�ü���С
//	pb->setMargin(15); //����ҳ�߾�Ϊ 15
//	pb->setIndent(14); //����������Ϊ 14(�������������Ե����Ϊ��������)
//	pb->setWordWrap(true); //�����ı��ں���λ���Զ�����
//	//���±�ǩ�����Զ����У�Ҳû��������ҳ�߾࣬���Դ��ı���ʽ��ʾ
//	QLabel* pb1 = new QLabel("<a href=http://aaa>AAAA fff ggg</a>", &w);
//	pb1->setFrameStyle(QFrame::Box | QFrame::Raised); pb1->setLineWidth(5);
//	pb1->move(22, 133); 
//	pb1->resize(222, 30);
//	pb1->setTextFormat(Qt::PlainText); //ʹ��ǩ�ı��Դ��ı���ʽ��ʽ
//	w.resize(300, 200); w.show(); return a.exec();
//}

// Led ������ʾ

#include<QtWidgets>
#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
	QApplication a(argc, argv);
	QWidget w;
	QLCDNumber* pn = new QLCDNumber(&w);
	pn->move(22, 22); pn->resize(222, 44);
	pn->setDigitCount(7); /*������ʾ��λ�����ú���Ӧλ�� display ����֮ǰ������ú��������û�
   �������á�*/
	pn->display(1245555345.2275687); //̫��ĸ��������Կ�ѧ��������ʽ��ʾ
	QLCDNumber* pn1 = new QLCDNumber(&w);
	pn1->move(22, 77); pn1->resize(222, 44);
	pn1->setSegmentStyle(QLCDNumber::Flat);
	pn1->setDigitCount(20);
	pn1->display("1234");
	cout << pn1->value() << endl; //��� 1234
	QLCDNumber* pn2 = new QLCDNumber(&w);
	pn2->move(22, 122); pn2->resize(222, 44);
	pn2->display("0x1a3"); /*��ͼ�� 16 ������ʽ��ʾ�������ֵ 1a3��������ɹ�����Ϊ 0x1a3 �ᱻ��
   ���ַ�����ʾ������ x �޷���ʾ���ᱻ�ո���档*/
	cout << pn2->value() << endl; //��� 0����Ϊ pn2 ��ʾ��"0 1A3"������Ч���֡�
	w.resize(300, 200);
	w.show();
	return a.exec();
}