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
//	//��������
//	QWidget w; 
//	B* pb1 = new B("AAA", &w); B* pb11 = new B("AAA1", &w);
//	QCheckBox* pb2 = new QCheckBox("BBB", &w);
//	QCheckBox* pb3 = new QCheckBox("CCC", &w);
//	QCheckBox* pb4 = new QCheckBox("DDD", &w);
//
//	QRadioButton* pb5 = new QRadioButton("EEE", &w);
//	QRadioButton* pb6 = new QRadioButton("FFF", &w); //��ѡ��ťĬ�Ͼ��������ԡ�
//	QCheckBox* pb7 = new QCheckBox("GGG", &w);
//	//���ָ�����
//	pb1->move(22, 22); pb11->move(99, 22);
//	pb2->move(22, 77); pb3->move(99, 77); pb4->move(155, 77);
//	pb5->move(22, 122); pb6->move(99, 122); pb7->move(155, 122);
//
//	pb1->setAutoRepeat(true); //pb1 �����Զ��ظ�
//	pb1->setAutoRepeatDelay(1000); //���ó�ʼ�ӳ�Ϊ 1 ��
//	pb1->setAutoRepeatInterval(500); //����ʱ����Ϊ 2 ��
//	//�Ѱ�ť pb1 �� clicked �ź���� f ������
//	//QObject::connect(pb1, &QPushButton::released, pb1, &B::f);
//	QObject::connect(pb1, &QPushButton::clicked, pb1, &B::f);
//	pb2->setAutoExclusive(true); pb3->setAutoExclusive(true); //������ť��������
//	pb11->setDown(true); //����Ϊ����״̬
//	pb7->setCheckable(false); //����Ϊ����ѡ�С�
//	w.resize(300, 200); w.show(); 
//	return a.exec();
//}

//#include "QtLearning.h"
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	//��������
//	QWidget w; B* pb1 = new B("AAA", &w); B* pb11 = new B("AAA1", &w);
//	QCheckBox* pb2 = new QCheckBox("BBB", &w);
//	//���ָ�����
//	pb1->move(22, 22); pb11->move(99, 22); pb2->move(22, 77);
//	//�Ѹ���ť����Ӧ�Ĳ۹�����
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
//	QDialog w; //Ĭ�ϰ�ťֻ�ڶԻ�������Ч�����߿�ʹ�� QWidget ������֤��
//	B* pb1 = new B("AAA", &w); B* pb2 = new B("BBB", &w); B* pb3 = new B("CCC", &w);
//	B* pb4 = new B("DDD", &w); B* pb5 = new B("EEE", &w);
//	QCheckBox* pb6 = new QCheckBox("XXX", &w);
//	pb2->setDefault(true); //���� pb2 ΪĬ�ϰ�ť��
//	pb3->setAutoDefault(0); //ȡ�� pb3 ���Զ�Ĭ�ϰ�ť����
//	pb4->setFlat(true); //���� pb4 �� flat ����Ϊ true��
//	// pb5->setAutoDefault(0); //���� pb5 ���� QPushButton�����������Զ�Ĭ�ϰ�ť
//	cout << pb1->autoDefault() << endl; //��� 1���Ի����еİ�ťĬ�Ͼ����Զ�Ĭ�ϰ�ť����
//	cout << pb1->isDefault() << endl; //��� 0��
//	//���ָ�����
//	pb1->move(22, 22); pb2->move(99, 22); pb3->move(177, 22);
//	pb4->move(22, 77); pb5->move(99, 77); pb6->move(177, 77);
//	//��֤Ĭ�ϰ�ť���Զ�Ĭ�ϰ�ť����Ҫʹ���źźͲۻ��ơ�
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
//	//ע������������������
//	pb1->setTristate(true); //������ť pb1 �ĵ���״̬
//	pb2->setCheckState(Qt::PartiallyChecked); //���ð�ť pb2 ��״̬Ϊ����״̬��
//	//�Ѱ�ť���ź���۹�����
//	QObject::connect(pb1, &QCheckBox::toggled, pb1, &B::f);
//	QObject::connect(pb1, &QCheckBox::stateChanged, pb1, &B::g);
//	w.resize(300, 200); w.show(); return a.exec();
//}

//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	//��������
//	QWidget w;
//	QToolButton* pb1 = new QToolButton(&w); QToolButton* pb2 = new QToolButton(&w);
//	pb1->setText("AAA"); //������ʾ���ı�
//	pb1->setIcon(QIcon("F:\\1.png")); //Ϊ���߰�ť����ͼ�꣬ͼ�������� F �̵� 1.png �ļ���
//	pb1->setIconSize(QSize(44, 44);//ͼ���С��ʹ�� QAbstractButton::setIconSize �������á�
//	pb1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //���߰�ť��������ʾ��ͼ���Աߡ�
//	pb1->setAutoRaise(true); //Ϊ�ù��߰�ť�����Զ���������
//	pb2->setArrowType(Qt::UpArrow); //�˴����õļ�ͷ���滻���������õ�ͼ��
//	pb2->setIcon(QIcon("F:\\1.png"));
//	pb2->setIconSize(QSize(44, 44));
//
//	pb1->move(22, 22); pb2->move(111, 22); // pb3->move(177,22);
//	w.resize(300, 200); w.show(); return a.exec();
//}