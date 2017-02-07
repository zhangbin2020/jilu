#include "compoment.h"

Compoment::Compoment(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
}

Compoment::~Compoment()
{

}
