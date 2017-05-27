
#include <QtWidgets/QApplication>

#include "NormalCar.h"
#include "SuperCar.h"
#include "HightSpeadRoad.h"
#include "NormalSpeadRoad.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	InterfaceRoad* hightRoad = new HightSpeadRoad(QString("hight speed road"));
	InterfaceRoad* normalRoad = new NormalSpeadRoad("normal speed road");

	InterfaceCar* superCar = new SuperCar;
	InterfaceCar* normalCar = new NormalCar;

	superCar->setRoad(hightRoad);
	normalCar->setRoad(normalRoad);

	superCar->run();
	normalCar->run();


	return a.exec();
}
