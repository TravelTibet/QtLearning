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


//#include "QtLearning.h"
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	//QWidget w;
//	B w;
//	//QDialogButtonBox �̳��� QWidget������䱾�������һ�����ڡ�
//	//��ť������� Qt ���õ� Ok �� Cancel ��ť
//	QDialogButtonBox* d = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
//	//����һЩ�Զ��尴ť������Ҫָ��������
//	QPushButton* pb1 = new QPushButton("Reset1");
//	QPushButton* pb2 = new QPushButton("Yes2");
//	QPushButton* pb3 = new QPushButton("Accept3");
//	QPushButton* pb4 = new QPushButton("Discard4");
//	QPushButton* pb5 = new QPushButton("No5");
//	QPushButton* pb6 = new QPushButton("Action6");
//	QPushButton* pb7 = new QPushButton("Reject7");
//	QPushButton* pb8 = new QPushButton("Apply8");
//	//��ť������Ӱ�ť����ť�����ᰴ����˳����ӣ������й̶���˳��ġ�
//	d->addButton(pb3, QDialogButtonBox::AcceptRole);
//	d->addButton(pb1, QDialogButtonBox::ResetRole);
//	d->addButton(pb2, QDialogButtonBox::YesRole);
//	d->addButton(pb4, QDialogButtonBox::DestructiveRole);
//	d->addButton(pb6, QDialogButtonBox::ActionRole);
//	d->addButton(pb7, QDialogButtonBox::RejectRole);
//	d->addButton(pb5, QDialogButtonBox::NoRole);
//	d->addButton(pb8, QDialogButtonBox::ApplyRole);
//	// ����Ϊ addButton ���������������ذ汾
//	d->addButton("Help9", QDialogButtonBox::HelpRole);
//	//d->addButton(QDialogButtonBox::Reset); //ֻ�����һ����׼��ť������ʹ�û��������Ӷ����
//   //Ҳ��ʹ�����º������ Qt ���õı�׼��ť�������º����������ʹ�ù��캯��ʱָ���ı�׼��ť��
//	//d->setStandardButtons(QDialogButtonBox::Reset|QDialogButtonBox::YesToAll);
//   //Ϊ��ť������źźͲ�
//	QObject::connect(d, &QDialogButtonBox::rejected, &w, &B::f);
//	QObject::connect(d, &QDialogButtonBox::accepted, &w, &B::g);
//	QObject::connect(d, &QDialogButtonBox::helpRequested, &w, &B::h);
//	//��ť���е����а�ť���ᷢ�� clicked �ź�
//	  //QObject::connect(d, SIGNAL(clicked(QAbstractButton*)), &w, SLOT(j(QAbstractButton*)));
//	d->resize(300, 200); d->show(); return a.exec();
//}


////	��ť��
//#include "QtLearning.h"
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	QWidget w; B* b = new B; //������ť��
//	QRadioButton* rb1 = new QRadioButton("AAA", &w);
//	QRadioButton* rb2 = new QRadioButton("BBB", &w);
//	QCheckBox* cb1 = new QCheckBox("CCC", &w); QCheckBox* cb2 = new QCheckBox("DDD", &w);
//	QCheckBox* cb3 = new QCheckBox("EEE", &w);
//	//���ö�������
//	rb1->setObjectName("AAA"); rb2->setObjectName("BBB");
//	cb1->setObjectName("CCC"); cb2->setObjectName("DDD"); cb3->setObjectName("EEE");
//	//�Ѱ�ť��ӵ���ť�� b ֮��
//	b->addButton(rb1); //δָ�� id��Ĭ��Ϊ-2
//	b->addButton(rb2); //δָ�� id��Ĭ��Ϊ-3
//	b->addButton(cb1, 2); //ָ�� id Ϊ 2
//	b->addButton(cb2); //δָ�� id����ʱĬ��Ϊ-4
//	
//	//b->addButton(cb3);		// ����Ĭ��Ϊ -5 ����������������!!
//
//	b->setId(cb2, 3); //�� cb2 �� id ����Ϊ 3��
//	//���ְ�ť
//	rb1->move(22, 22); rb2->move(22, 50); cb1->move(22, 77);
//	cb2->move(22, 105); cb3->move(99, 22);
//	//�����źźͲ�
//	QObject::connect(b, SIGNAL(buttonClicked(QAbstractButton*)), b, SLOT(f(QAbstractButton*)));
//	w.resize(300, 200); w.show(); return a.exec();
//}

// QLabel

//#include "QtLearning.h"
//int main(int argc, char* argv[])
//{
//	QApplication a(argc, argv);
//	QWidget w;
//	B* pb = new B("<a href=http://aaa>bbb</a>", &w);
//	pb->move(22, 22);	pb->resize(222, 33);
//	pb->setFrameStyle(QFrame::Box | QFrame::Raised);	pb->setLineWidth(5);
//	pb->setOpenExternalLinks(true);
//	pb->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
//	QObject::connect(pb, &QLabel::linkActivated, pb, &B::f); //��ǩ pb ���ᷢ�͸��źš�
//	B* pb1 = new B("	", &w);
//	pb1->setFrameStyle(QFrame::Box | QFrame::Raised); pb1->setLineWidth(5);
//
//	pb1->resize(222, 33); pb1->move(22, 63);
//	pb1->setOpenExternalLinks(false); /*����Ĭ��ֵ���˲���ʡ�ԡ��˴�������ǩ�ᷢ�� linkActivated
//   �źţ������ܴ����ӡ�*/
//   //�������ñ�ʾ pb1 �ı�ǩ�ı��ɱ༭����ʹ�����ͼ��̽��н�����Ҳ��ʹ�����ͼ��̼������ӡ�
//	pb1->setTextInteractionFlags(Qt::LinksAccessibleByMouse | Qt::LinksAccessibleByKeyboard |
//		Qt::TextSelectableByMouse | Qt::TextSelectableByKeyboard |
//		Qt::TextEditable);
//	QObject::connect(pb1, &QLabel::linkActivated, pb1, &B::f); //��ǩ pb1 �ᷢ�ʹ��ź�
//	B* pb2 = new B("<a href=http://aaa>ddd</a>", &w);
//	pb2->setFrameStyle(QFrame::Box | QFrame::Raised); pb2->setLineWidth(5);
//	pb2->resize(222, 33); pb2->move(22, 133);
//	/*�������ñ�ʾ��pb2 �ı�ǩ�ı�ֻ��ʹ�����ͼ��̽���������ʹ��������̼������ӣ���˵��
//   pb2 ��������ӣ�Ҳ���ᷢ�� linkActivated �ź�*/
//	pb2->setTextInteractionFlags(Qt::TextSelectableByMouse | Qt::TextSelectableByKeyboard);
//	QObject::connect(pb2, &QLabel::linkActivated, pb2, &B::f); //��ǩ pb2 ���ᷢ�͸��ź�
//	w.resize(300, 200); w.show(); return a.exec();
//}

//#include "QtLearning.h"
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	QWidget w; QPushButton* b = new QPushButton("AAAA", &w);
//	B* pb = new B("<a href=http://aaa>bbb</a>", &w);
//	pb->move(22, 22); pb->resize(222, 88);
//	//���ñ�ǩ�߿���ʽ����ʹ�俴�����Ƚ�����
//	pb->setFrameStyle(QFrame::Box | QFrame::Raised); pb->setLineWidth(5);
//	//�� f ���µ� 1.png ����Ϊ��ǩ��ͼƬ�������û������ǩ֮ǰ�����ݡ�
//	pb->setPixmap(QPixmap("E:\\Tom.png"));
//	QObject::connect(b, &QPushButton::clicked, pb, &B::f); //�����ź���ۺ���
//	//����������֤���ֵ���ʾ���������
//	QLabel* pb1 = new QLabel("ab&cde", &w); //�ñ�ǩ�޻�飬"&"�ַ��ᱻ��ʾ�ڱ�ǩ�ı���
//	pb1->move(22, 128);
//	QLabel* pb2 = new QLabel("ab&cde", &w); pb2->move(66, 128);
//	pb2->setNum(33.333); //������ 33.333 ���ַ�������ʽ��ʾΪ��ǩ���ı��������֮ǰ�����ݡ�
//	QLabel* pb3 = new QLabel("ab&cde", &w); pb3->move(22, 155);
//	QLineEdit* pe = new QLineEdit(&w); pe->move(55, 155);
//	pb3->setBuddy(pe); //���û��󣬱�ǩ��"&"�ַ������ᱻ��ʾ��
//	w.resize(300, 200); w.show(); return a.exec();
//}