#ifndef ADAPTOR_H
#define ADAPTOR_H

#include <QtWidgets/QMainWindow>


class Adaptor : public QMainWindow
{
	Q_OBJECT

public:
	Adaptor(QWidget *parent = 0);
	~Adaptor();

private:
};

#endif // ADAPTOR_H
