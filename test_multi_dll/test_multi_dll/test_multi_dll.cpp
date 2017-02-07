#include "test_multi_dll.h"

#include "dll1.h"

test_multi_dll::test_multi_dll(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.btn, &QPushButton::clicked, this, &test_multi_dll::OnBtn);
}

test_multi_dll::~test_multi_dll()
{

}

void test_multi_dll::OnBtn()
{
	dll1 d;
	int y = d.add(1,2);
}
