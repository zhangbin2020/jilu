
#include <QtWidgets/QApplication>

#include "DirectOne.h"
#include "BuilderOne.h"


//builder model
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	BuildInterface* build = new BuilderOne;
	DirectorInterface* directone = new DirectOne;

	directone->SetBuilder(build);
	directone->Direct();

	return a.exec();
}
