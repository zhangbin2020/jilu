#ifndef BASEINTERFACE_H
#define BASEINTERFACE_H

#include <QObject>

class baseInterface : public QObject
{
	Q_OBJECT

public:
	baseInterface(QObject *parent);
	~baseInterface();

	void setA(int a){m_a = a;}
	void setB(int b){m_b = b;}

	virtual int GetResult();

protected:
	int m_a;
	int m_b;

private:
	
};

#endif // BASEINTERFACE_H
