#ifndef MEMOCLASS_H
#define MEMOCLASS_H

#include <QObject>


//±¸ÍüÂ¼Àà£¬
class MemoClass : public QObject
{
	Q_OBJECT

public:
	MemoClass(QObject *parent=0);
	~MemoClass();
	MemoClass( const MemoClass& other );


	void setPower(int val){ m_power = val; }
	void setName(QString val){ m_name = val; }

	int getPower()const { return m_power; }
	QString getName()const { return m_name; }

private:
	int m_power;
	QString m_name;
};

#endif // MEMOCLASS_H
