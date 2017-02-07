#include "facade.h"

facade::facade(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
}

facade::~facade()
{

}
