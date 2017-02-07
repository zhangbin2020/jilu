#ifndef ROLECLASS_H
#define ROLECLASS_H

#include <QObject>
#include "MemoClass.h"

//需要保存状态

class RoleClass : public QObject
{
	Q_OBJECT

public:
	RoleClass(QObject *parent=0);
	~RoleClass();

	void setName(QString val){ m_name = val; }

	void fight();

	MemoClass saveState();
	void RecoverState( MemoClass* val );

private:
	int m_power;//体力
	QString m_name;
};

#endif // ROLECLASS_H
