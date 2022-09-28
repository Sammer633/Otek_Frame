#ifndef ADDIMAGEDIALOG_H
#define ADDIMAGEDIALOG_H
#include "ui_algorithmsettingsdlog.h"
#include "algorithmsettingsdlog.h"
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QPushButton>
#include "hanxichack.h"
#include <QComboBox>

class addImageDialog :public AlgorithmSettingsDlog
{
public:
    explicit addImageDialog(int _currcameraflag,int _origcameraflag, cv::Mat img, QList<Roidata> _roiD);
    ~addImageDialog();
public:
   void setControlValue(AlgParam algparm,  int setAI);
   void getControlValue(AlgParam* algparm, int& setAI);
   QComboBox* combobox1;
   QComboBox* comboboxbg;
   QSpinBox* box1;
   QDoubleSpinBox* box2;
   QDoubleSpinBox* box3;
   QSpinBox* box4;
   QSpinBox* box5;
   QSpinBox* box6;

   QSpinBox* box7;
   QSpinBox* box8;
   QSpinBox* box9;
   QSpinBox* box10;
   QSpinBox* box11;
   QSpinBox* box12;
   QSpinBox* box13;
   QSpinBox* box14;
private:

};


#endif // ADDIMAGEDIALOG_H
