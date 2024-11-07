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
//	//创建部件
//	QWidget w; 
//	B* pb1 = new B("AAA", &w); B* pb11 = new B("AAA1", &w);
//	QCheckBox* pb2 = new QCheckBox("BBB", &w);
//	QCheckBox* pb3 = new QCheckBox("CCC", &w);
//	QCheckBox* pb4 = new QCheckBox("DDD", &w);
//
//	QRadioButton* pb5 = new QRadioButton("EEE", &w);
//	QRadioButton* pb6 = new QRadioButton("FFF", &w); //单选按钮默认具有排他性。
//	QCheckBox* pb7 = new QCheckBox("GGG", &w);
//	//布局各部件
//	pb1->move(22, 22); pb11->move(99, 22);
//	pb2->move(22, 77); pb3->move(99, 77); pb4->move(155, 77);
//	pb5->move(22, 122); pb6->move(99, 122); pb7->move(155, 122);
//
//	pb1->setAutoRepeat(true); //pb1 开启自动重复
//	pb1->setAutoRepeatDelay(1000); //设置初始延迟为 1 秒
//	pb1->setAutoRepeatInterval(500); //设置时间间隔为 2 秒
//	//把按钮 pb1 的 clicked 信号与槽 f 关联。
//	//QObject::connect(pb1, &QPushButton::released, pb1, &B::f);
//	QObject::connect(pb1, &QPushButton::clicked, pb1, &B::f);
//	pb2->setAutoExclusive(true); pb3->setAutoExclusive(true); //开启按钮的排他性
//	pb11->setDown(true); //设置为按下状态
//	pb7->setCheckable(false); //设置为不可选中。
//	w.resize(300, 200); w.show(); 
//	return a.exec();
//}

//#include "QtLearning.h"
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	//创建部件
//	QWidget w; B* pb1 = new B("AAA", &w); B* pb11 = new B("AAA1", &w);
//	QCheckBox* pb2 = new QCheckBox("BBB", &w);
//	//布局各部件
//	pb1->move(22, 22); pb11->move(99, 22); pb2->move(22, 77);
//	//把各按钮与相应的槽关联。
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
//	QDialog w; //默认按钮只在对话框中有效。读者可使用 QWidget 进行验证。
//	B* pb1 = new B("AAA", &w); B* pb2 = new B("BBB", &w); B* pb3 = new B("CCC", &w);
//	B* pb4 = new B("DDD", &w); B* pb5 = new B("EEE", &w);
//	QCheckBox* pb6 = new QCheckBox("XXX", &w);
//	pb2->setDefault(true); //设置 pb2 为默认按钮。
//	pb3->setAutoDefault(0); //取消 pb3 的自动默认按钮属性
//	pb4->setFlat(true); //设置 pb4 的 flat 属性为 true。
//	// pb5->setAutoDefault(0); //错误 pb5 不是 QPushButton，不能设置自动默认按钮
//	cout << pb1->autoDefault() << endl; //输出 1。对话框中的按钮默认具有自动默认按钮属性
//	cout << pb1->isDefault() << endl; //输出 0。
//	//布局各部件
//	pb1->move(22, 22); pb2->move(99, 22); pb3->move(177, 22);
//	pb4->move(22, 77); pb5->move(99, 77); pb6->move(177, 77);
//	//验证默认按钮和自动默认按钮，需要使用信号和槽机制。
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
//	//注意以下两函数的区别
//	pb1->setTristate(true); //开启按钮 pb1 的第三状态
//	pb2->setCheckState(Qt::PartiallyChecked); //设置按钮 pb2 的状态为第三状态。
//	//把按钮的信号与槽关联。
//	QObject::connect(pb1, &QCheckBox::toggled, pb1, &B::f);
//	QObject::connect(pb1, &QCheckBox::stateChanged, pb1, &B::g);
//	w.resize(300, 200); w.show(); return a.exec();
//}

//#include<QtWidgets>
//#include <iostream>
//using namespace std;
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	//创建部件
//	QWidget w;
//	QToolButton* pb1 = new QToolButton(&w); QToolButton* pb2 = new QToolButton(&w);
//	pb1->setText("AAA"); //设置显示的文本
//	pb1->setIcon(QIcon("F:\\1.png")); //为工具按钮设置图标，图标来自于 F 盘的 1.png 文件。
//	pb1->setIconSize(QSize(44, 44);//图标大小需使用 QAbstractButton::setIconSize 函数设置。
//	pb1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //工具按钮将文字显示于图标旁边。
//	pb1->setAutoRaise(true); //为该工具按钮设置自动提升属性
//	pb2->setArrowType(Qt::UpArrow); //此处设置的箭头会替换掉以下设置的图标
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
//	//QDialogButtonBox 继承自 QWidget，因此其本身可以是一个窗口。
//	//向按钮框中添加 Qt 内置的 Ok 和 Cancel 按钮
//	QDialogButtonBox* d = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
//	//创建一些自定义按钮，不需要指定父部件
//	QPushButton* pb1 = new QPushButton("Reset1");
//	QPushButton* pb2 = new QPushButton("Yes2");
//	QPushButton* pb3 = new QPushButton("Accept3");
//	QPushButton* pb4 = new QPushButton("Discard4");
//	QPushButton* pb5 = new QPushButton("No5");
//	QPushButton* pb6 = new QPushButton("Action6");
//	QPushButton* pb7 = new QPushButton("Reject7");
//	QPushButton* pb8 = new QPushButton("Apply8");
//	//向按钮框中添加按钮，按钮并不会按以下顺序添加，而是有固定的顺序的。
//	d->addButton(pb3, QDialogButtonBox::AcceptRole);
//	d->addButton(pb1, QDialogButtonBox::ResetRole);
//	d->addButton(pb2, QDialogButtonBox::YesRole);
//	d->addButton(pb4, QDialogButtonBox::DestructiveRole);
//	d->addButton(pb6, QDialogButtonBox::ActionRole);
//	d->addButton(pb7, QDialogButtonBox::RejectRole);
//	d->addButton(pb5, QDialogButtonBox::NoRole);
//	d->addButton(pb8, QDialogButtonBox::ApplyRole);
//	// 以下为 addButton 函数的另两个重载版本
//	d->addButton("Help9", QDialogButtonBox::HelpRole);
//	//d->addButton(QDialogButtonBox::Reset); //只能添加一个标准按钮，不能使用或运算符添加多个。
//   //也可使用以下函数添加 Qt 内置的标准按钮，但以下函数会清除掉使用构造函数时指定的标准按钮。
//	//d->setStandardButtons(QDialogButtonBox::Reset|QDialogButtonBox::YesToAll);
//   //为按钮框关联信号和槽
//	QObject::connect(d, &QDialogButtonBox::rejected, &w, &B::f);
//	QObject::connect(d, &QDialogButtonBox::accepted, &w, &B::g);
//	QObject::connect(d, &QDialogButtonBox::helpRequested, &w, &B::h);
//	//按钮框中的所有按钮都会发送 clicked 信号
//	  //QObject::connect(d, SIGNAL(clicked(QAbstractButton*)), &w, SLOT(j(QAbstractButton*)));
//	d->resize(300, 200); d->show(); return a.exec();
//}


////	按钮组
//#include "QtLearning.h"
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	QWidget w; B* b = new B; //创建按钮组
//	QRadioButton* rb1 = new QRadioButton("AAA", &w);
//	QRadioButton* rb2 = new QRadioButton("BBB", &w);
//	QCheckBox* cb1 = new QCheckBox("CCC", &w); QCheckBox* cb2 = new QCheckBox("DDD", &w);
//	QCheckBox* cb3 = new QCheckBox("EEE", &w);
//	//设置对象名。
//	rb1->setObjectName("AAA"); rb2->setObjectName("BBB");
//	cb1->setObjectName("CCC"); cb2->setObjectName("DDD"); cb3->setObjectName("EEE");
//	//把按钮添加到按钮组 b 之中
//	b->addButton(rb1); //未指定 id，默认为-2
//	b->addButton(rb2); //未指定 id，默认为-3
//	b->addButton(cb1, 2); //指定 id 为 2
//	b->addButton(cb2); //未指定 id，此时默认为-4
//	
//	//b->addButton(cb3);		// 这里默认为 -5 继续延续上面的序号!!
//
//	b->setId(cb2, 3); //把 cb2 的 id 设置为 3。
//	//布局按钮
//	rb1->move(22, 22); rb2->move(22, 50); cb1->move(22, 77);
//	cb2->move(22, 105); cb3->move(99, 22);
//	//关联信号和槽
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
//	QObject::connect(pb, &QLabel::linkActivated, pb, &B::f); //标签 pb 不会发送该信号。
//	B* pb1 = new B("	", &w);
//	pb1->setFrameStyle(QFrame::Box | QFrame::Raised); pb1->setLineWidth(5);
//
//	pb1->resize(222, 33); pb1->move(22, 63);
//	pb1->setOpenExternalLinks(false); /*这是默认值，此步可省略。此处表明标签会发送 linkActivated
//   信号，但不能打开链接。*/
//   //以下设置表示 pb1 的标签文本可编辑，可使用鼠标和键盘进行交互，也可使用鼠标和键盘激活链接。
//	pb1->setTextInteractionFlags(Qt::LinksAccessibleByMouse | Qt::LinksAccessibleByKeyboard |
//		Qt::TextSelectableByMouse | Qt::TextSelectableByKeyboard |
//		Qt::TextEditable);
//	QObject::connect(pb1, &QLabel::linkActivated, pb1, &B::f); //标签 pb1 会发送此信号
//	B* pb2 = new B("<a href=http://aaa>ddd</a>", &w);
//	pb2->setFrameStyle(QFrame::Box | QFrame::Raised); pb2->setLineWidth(5);
//	pb2->resize(222, 33); pb2->move(22, 133);
//	/*以下设置表示，pb2 的标签文本只可使用鼠标和键盘交互，不能使用鼠标或键盘激活链接，因此点击
//   pb2 不会打开链接，也不会发送 linkActivated 信号*/
//	pb2->setTextInteractionFlags(Qt::TextSelectableByMouse | Qt::TextSelectableByKeyboard);
//	QObject::connect(pb2, &QLabel::linkActivated, pb2, &B::f); //标签 pb2 不会发送该信号
//	w.resize(300, 200); w.show(); return a.exec();
//}

//#include "QtLearning.h"
//int main(int argc, char* argv[]) {
//	QApplication a(argc, argv);
//	QWidget w; QPushButton* b = new QPushButton("AAAA", &w);
//	B* pb = new B("<a href=http://aaa>bbb</a>", &w);
//	pb->move(22, 22); pb->resize(222, 88);
//	//设置标签边框样式，以使其看起来比较明显
//	pb->setFrameStyle(QFrame::Box | QFrame::Raised); pb->setLineWidth(5);
//	//把 f 盘下的 1.png 设置为标签的图片，此设置会清除标签之前的内容。
//	pb->setPixmap(QPixmap("E:\\Tom.png"));
//	QObject::connect(b, &QPushButton::clicked, pb, &B::f); //关联信号与槽函数
//	//以下内容验证数字的显示与伙伴的设置
//	QLabel* pb1 = new QLabel("ab&cde", &w); //该标签无伙伴，"&"字符会被显示在标签文本中
//	pb1->move(22, 128);
//	QLabel* pb2 = new QLabel("ab&cde", &w); pb2->move(66, 128);
//	pb2->setNum(33.333); //将数字 33.333 以字符串的形式显示为标签的文本，并清除之前的内容。
//	QLabel* pb3 = new QLabel("ab&cde", &w); pb3->move(22, 155);
//	QLineEdit* pe = new QLineEdit(&w); pe->move(55, 155);
//	pb3->setBuddy(pe); //设置伙伴后，标签的"&"字符将不会被显示。
//	w.resize(300, 200); w.show(); return a.exec();
//}