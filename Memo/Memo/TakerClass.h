#ifndef TAKERCLASS_H
#define TAKERCLASS_H

#include <QObject>
#include "MemoClass.h"

//����¼ ������

class TakerClass : public QObject
{
	Q_OBJECT

public:
	TakerClass(QObject *parent=0);
	~TakerClass();

	void setMemo(MemoClass* memo){ m_memo = memo; }
	MemoClass* GetMemo(){ return m_memo; }

private:
	MemoClass* m_memo;//����¼
	
};

#endif // TAKERCLASS_H
