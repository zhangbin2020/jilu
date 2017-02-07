#ifndef TEMPLATEMETHOD_H
#define TEMPLATEMETHOD_H

#include <QtGui/QMainWindow>
#include "ui_templatemethod.h"

class TemplateMethod : public QMainWindow
{
	Q_OBJECT

public:
	TemplateMethod(QWidget *parent = 0, Qt::WFlags flags = 0);
	~TemplateMethod();


private:
	Ui::TemplateMethodClass ui;
};

#endif // TEMPLATEMETHOD_H
