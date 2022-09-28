#include "addimagedialog.h"
#include "mydetection.h"
#include "Global.h"
#include <QGridLayout>
#include <QLabel>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QPushButton>

addImageDialog::addImageDialog(int _currcameraflag,int _origcameraflag, cv::Mat img, QList<Roidata> _roiD)
    :AlgorithmSettingsDlog(_currcameraflag, _origcameraflag, img, _roiD)
    //    ,base(new AlgorithmSettingsDlog(_currcameraflag, _origcameraflag, img, _roiD))
{
    //widget_8 添加控件操作
    //    auto mylist = MyDetection::getInstance()->algorithmFunction;
    ui->btn_drawRoi->setEnabled(false);
    ui->btn_drawRoiYN->setEnabled(false);
    QGridLayout* layout = new QGridLayout;
    layout->setAlignment(Qt::AlignTop);
    QPushButton* btn0 = new QPushButton();
    btn0->setStyleSheet("background-color: rgb(0, 170, 0);");
    btn0->setText(QString("AI启用"));  //Add.at(i)
    btn0->resize(ui->btn_registerImage->width(),ui->btn_modelImage->height());
    layout->addWidget(btn0, 0, 0);
    combobox1 = new QComboBox();
    combobox1->setStyleSheet(mycomboxsty);
    combobox1->addItem("关闭");
    combobox1->addItem("开启");
    layout->addWidget(combobox1, 0, 1);

    QPushButton* btn1 = new QPushButton();
    btn1->setStyleSheet(mybtn);
    btn1->setText(QString("对比度"));  //Add.at(i)
    btn1->resize(ui->btn_registerImage->width(),ui->btn_modelImage->height());
    layout->addWidget(btn1, 1, 0);
    box1 = new QSpinBox();
    box1->setAlignment(Qt::AlignHCenter);
    box1->setStyleSheet(myspinbox);
    box1->setMinimum(0);
    box1->setMaximum(255);
    box1->setSingleStep(1);
    layout->addWidget(box1, 1, 1);

    QPushButton* btn2 = new QPushButton();
    btn2->setStyleSheet(mybtn);
    btn2->setText(QString("最小匹配值"));  //Add.at(i)
    btn2->resize(ui->btn_registerImage->width(),ui->btn_modelImage->height());
    layout->addWidget(btn2, 2, 0);
    box2 = new QDoubleSpinBox();
    box2->setAlignment(Qt::AlignHCenter);
    box2->setStyleSheet(myDoublspinbox);
    box2->setMinimum(0.0);
    box2->setMaximum(1.0);
    box2->setSingleStep(0.1);
    layout->addWidget(box2, 2, 1);

    QPushButton* btn3 = new QPushButton();
    btn3->setStyleSheet(mybtn);
    btn3->setText(QString("贪婪度"));  //Add.at(i)
    btn3->resize(ui->btn_registerImage->width(),ui->btn_modelImage->height());
    layout->addWidget(btn3, 3, 0);
    box3 = new QDoubleSpinBox();
    box3->setAlignment(Qt::AlignHCenter);
    box3->setStyleSheet(myDoublspinbox);
    box3->setMinimum(0);
    box3->setMaximum(1);
    box3->setSingleStep(0.1);
    layout->addWidget(box3, 3, 1);

    QPushButton* btn4 = new QPushButton();
    btn4->setStyleSheet(mybtn);
    btn4->setText(QString("缺焊分割阈值"));  //Add.at(i)
    btn4->resize(ui->btn_registerImage->width(),ui->btn_modelImage->height());
    layout->addWidget(btn4, 4, 0);
    box4 = new QSpinBox();
    box4->setAlignment(Qt::AlignHCenter);
    box4->setStyleSheet(myspinbox);
    box4->setMinimum(0);
    box4->setMaximum(255);
    box4->setSingleStep(1);
    layout->addWidget(box4, 4, 1);


    QPushButton* btn5 = new QPushButton();
    btn5->setStyleSheet(mybtn);
    btn5->setText(QString("多焊分割阈值"));  //Add.at(i)
    btn5->resize(ui->btn_registerImage->width(),ui->btn_modelImage->height());
    layout->addWidget(btn5, 5, 0);
    box5 = new QSpinBox();
    box5->setAlignment(Qt::AlignHCenter);
    box5->setStyleSheet(myspinbox);
    box5->setMinimum(0);
    box5->setMaximum(255);
    box5->setSingleStep(1);
    layout->addWidget(box5, 5, 1);

    QPushButton* btn6 = new QPushButton();
    btn6->setStyleSheet(mybtn);
    btn6->setText(QString("多焊卡控阈值"));  //Add.at(i)
    btn6->resize(ui->btn_registerImage->width(),ui->btn_modelImage->height());
    layout->addWidget(btn6, 6, 0);
    box6 = new QSpinBox();
    box6->setAlignment(Qt::AlignHCenter);
    box6->setStyleSheet(myspinbox);
    box6->setMinimum(0);
    box6->setMaximum(255);
    box6->setSingleStep(1);
    layout->addWidget(box6, 6, 1);
    ui->widget_8->setLayout(layout);

    QPushButton* btn7 = new QPushButton();
    btn7->setStyleSheet(mybtn);
    btn7->setText(QString("连焊分割阈值"));  //Add.at(i)
    btn7->resize(ui->btn_registerImage->width(),ui->btn_modelImage->height());
    layout->addWidget(btn7, 7, 0);
    box7 = new QSpinBox();
    box7->setAlignment(Qt::AlignHCenter);
    box7->setStyleSheet(myspinbox);
    box7->setMinimum(0);
    box7->setMaximum(255);
    box7->setSingleStep(1);
    layout->addWidget(box7, 7, 1);
    ui->widget_8->setLayout(layout);

    QPushButton* btn8 = new QPushButton();
    btn8->setStyleSheet(mybtn);
    btn8->setText(QString("连焊焊锡最小长度"));  //Add.at(i)
    btn8->resize(ui->btn_registerImage->width(),ui->btn_modelImage->height());
    layout->addWidget(btn8, 8, 0);
    box8 = new QSpinBox();
    box8->setAlignment(Qt::AlignHCenter);
    box8->setStyleSheet(myspinbox);
    box8->setMinimum(0);
    box8->setMaximum(1000);
    box8->setSingleStep(1);
    layout->addWidget(box8, 8, 1);
    ui->widget_8->setLayout(layout);

    QPushButton* btn9 = new QPushButton();
    btn9->setStyleSheet(mybtn);
    btn9->setText(QString("漏焊面积阈值"));  //Add.at(i)
    btn9->resize(ui->btn_registerImage->width(),ui->btn_modelImage->height());
    layout->addWidget(btn9, 9, 0);
    box9 = new QSpinBox();
    box9->setAlignment(Qt::AlignHCenter);
    box9->setStyleSheet(myspinbox);
    box9->setMinimum(0);
    box9->setMaximum(9999);
    box9->setSingleStep(1);
    layout->addWidget(box9, 9, 1);
    ui->widget_8->setLayout(layout);

    QPushButton* btn10 = new QPushButton();
    btn10->setStyleSheet(mybtn);
    btn10->setText(QString("漏焊孔洞阈值"));  //Add.at(i)
    btn10->resize(ui->btn_registerImage->width(),ui->btn_modelImage->height());
    layout->addWidget(btn10, 10, 0);
    box10 = new QSpinBox();
    box10->setAlignment(Qt::AlignHCenter);
    box10->setStyleSheet(myspinbox);
    box10->setMinimum(0);
    box10->setMaximum(9999);
    box10->setSingleStep(1);
    layout->addWidget(box10, 10, 1);
    ui->widget_8->setLayout(layout);

    QPushButton* btn11 = new QPushButton();
    btn11->setStyleSheet(mybtn);
    btn11->setText(QString("漏焊膨胀半径"));  //Add.at(i)
    btn11->resize(ui->btn_registerImage->width(),ui->btn_modelImage->height());
    layout->addWidget(btn11, 11, 0);
    box11 = new QSpinBox();
    box11->setAlignment(Qt::AlignHCenter);
    box11->setStyleSheet(myspinbox);
    box11->setMinimum(0);
    box11->setMaximum(9999);
    box11->setSingleStep(1);
    layout->addWidget(box11, 11, 1);
    ui->widget_8->setLayout(layout);

    QPushButton* btn12 = new QPushButton();
    btn12->setStyleSheet(mybtn);
    btn12->setText(QString("蓝色黑洞阈值"));  //Add.at(i)
    btn12->resize(ui->btn_registerImage->width(),ui->btn_modelImage->height());
    layout->addWidget(btn12, 12, 0);
    box12 = new QSpinBox();
    box12->setAlignment(Qt::AlignHCenter);
    box12->setStyleSheet(myspinbox);
    box12->setMinimum(0);
    box12->setMaximum(255);
    box12->setSingleStep(1);
    layout->addWidget(box12, 12, 1);
    ui->widget_8->setLayout(layout);

    QPushButton* btn13 = new QPushButton();
    btn13->setStyleSheet(mybtn);
    btn13->setText(QString("漏焊分割阈值"));  //Add.at(i)
    btn13->resize(ui->btn_registerImage->width(),ui->btn_modelImage->height());
    layout->addWidget(btn13, 13, 0);
    box13 = new QSpinBox();
    box13->setAlignment(Qt::AlignHCenter);
    box13->setStyleSheet(myspinbox);
    box13->setMinimum(0);
    box13->setMaximum(255);
    box13->setSingleStep(1);
    layout->addWidget(box13, 13, 1);
    ui->widget_8->setLayout(layout);

    QPushButton* btn14 = new QPushButton();
    btn14->setStyleSheet(mybtn);
    btn14->setText(QString("连焊边距"));  //Add.at(i)
    btn14->resize(ui->btn_registerImage->width(),ui->btn_modelImage->height());
    layout->addWidget(btn14, 14, 0);
    box14 = new QSpinBox();
    box14->setAlignment(Qt::AlignHCenter);
    box14->setStyleSheet(myspinbox);
    box14->setMinimum(0);
    box14->setMaximum(9999);
    box14->setSingleStep(1);
    layout->addWidget(box14, 14, 1);

    QPushButton* btn15 = new QPushButton();
    btn15->setStyleSheet(mybtn);
    btn15->setText(QString("产品背景色"));  //Add.at(i)
    btn15->resize(ui->btn_registerImage->width(),ui->btn_modelImage->height());
    layout->addWidget(btn15, 15, 0);
    comboboxbg = new QComboBox();
    comboboxbg->setStyleSheet(mycomboxsty);
    comboboxbg->addItem("黑色背景");
    comboboxbg->addItem("白色背景");
    layout->addWidget(comboboxbg, 15, 1);

    //    ui->widget_8->setLayout(layout);
    QWidget *wid = new QWidget();
    wid->setLayout(layout);
    QScrollArea* scrollArea = new QScrollArea();
    //    scrollArea->setAlignment(Qt::AlignRight);
    //    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    scrollArea->setWidget(wid); //绑定widget scrollArea成为了widget的父容器
    scrollArea->setWidgetResizable(true);//在widget要显示的内容超出范围时 能够改变widget大小 显示内容

    //    QScrollArea * testar = new QScrollArea; // 创建滚动显示区域
    //     testar->setAlignment(Qt::AlignRight); // 设置滚动条位置
    //     testar->setWidget(arWidget); // 将设置好的幕布嵌入到滚动显示区域

    QVBoxLayout * vlayout = new QVBoxLayout(this); // 在主界面创建一个布局
    //     vlayout->setContentsMargins(0);
    vlayout->addWidget(scrollArea); // 将滚动显示区域 添加到布局
    ui->widget_8->setLayout(vlayout);
}


addImageDialog::~addImageDialog()
{//    delete ui;
}

void addImageDialog::setControlValue(AlgParam algparm, int setAI)
{
    combobox1->setCurrentIndex(setAI);
    comboboxbg->setCurrentIndex(algparm.backgroung);
    box1->setValue(algparm.nModelContrast);
    box2->setValue((double)algparm.fMinScore);
    box3->setValue((double)algparm.fGreediness);
    box4->setValue(algparm.nRchanelThre);
    box5->setValue(algparm.nHchanelThre);
    box6->setValue(algparm.nSolderAreThre);

    box7->setValue(algparm.nWeldThHigh);
    box8->setValue(algparm.nMinShortWeldLength);
    box9->setValue(algparm.nMaxRedArea);
    box10->setValue(algparm.nMinHoleArea);
    box11->setValue(algparm.fPinCloseSize);
    box12->setValue(algparm.nHoleThInBlue);
    box13->setValue(algparm.nThPinAboveG);
    box14->setValue(algparm.nAsSide);
}

void addImageDialog::getControlValue(AlgParam* algparm,int& setAI)
{
    setAI = combobox1->currentIndex();
    algparm->backgroung = comboboxbg->currentIndex();
    algparm->nModelContrast = box1->value();
    algparm->fMinScore = box2->value();
    algparm->fGreediness = box3->value();
    algparm->nRchanelThre = box4->value();
    algparm->nHchanelThre = box5->value();
    algparm->nSolderAreThre = box6->value();

    algparm->nWeldThHigh = box7->value();
    algparm->nMinShortWeldLength = box8->value();
    algparm->nMaxRedArea = box9->value();
    algparm->nMinHoleArea = box10->value();
    algparm->fPinCloseSize = box11->value();
    algparm->nHoleThInBlue = box12->value();
    algparm->nThPinAboveG = box13->value();
    algparm->nAsSide = box14->value();
}
