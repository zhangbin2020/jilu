#ifndef TAKERCLASS_H
#define TAKERCLASS_H

#include <QObject>
#include "MemoClass.h"

//备忘录 持有类

class TakerClass : public QObject
{
	Q_OBJECT

public:
	TakerClass(QObject *parent=0);
	~TakerClass();

	void setMemo(MemoClass* memo){ m_memo = memo; }
	MemoClass* GetMemo(){ return m_memo; }

private:
	MemoClass* m_memo;//备忘录
	
};

#endif // TAKERCLASS_H
