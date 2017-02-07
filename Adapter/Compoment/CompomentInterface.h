#ifndef COMPOMENTINTERFACE_H
#define COMPOMENTINTERFACE_H

#include <QObject>



class CompomentInterface : public QObject
{
	Q_OBJECT

public:
	CompomentInterface(QObject *parent=0,QString name="");
	~CompomentInterface();

	virtual void Add( CompomentInterface* );
	virtual void Remove( CompomentInterface* );
	virtual void Show(int nLevel);//展示职责

protected:
	QString m_name;
};

#endif // COMPOMENTINTERFACE_H
