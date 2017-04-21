#include <QtGui>

#include "treemodel.h"
#include "testDialog.h"

TestDialog::TestDialog(QWidget *parent) : QDialog(parent)
{
	QFile file("./default.txt");
	file.open(QIODevice::ReadOnly);
	model = new TreeModel(file.readAll());
	file.close();

	QPushButton *pb = new QPushButton("click me", this);

	connect(pb, SIGNAL(clicked()), this, SLOT(getCheckedItemData()));

	QTreeView *view = new QTreeView(this);
	view->setModel(model);
	view->setColumnHidden(1, true);

	QVBoxLayout *layout = new QVBoxLayout;
	layout->addWidget(view);
	layout->addWidget(pb);

	setLayout(layout);
}

void TestDialog::getCheckedItemData()
{
	QString resStr;
	model->getCheckedItemData(resStr);

	QMessageBox::information(this, "just for test", resStr);
}