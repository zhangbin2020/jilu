#ifndef COMPONENTINTERFACE_H
#define COMPONENTINTERFACE_H

#include <QObject>

typedef enum _tag_Decator
{
	dec1,
	dec2,
	dec3
}dec_type;


//功能接口
class GongNengInterface : public QObject
{
	Q_OBJECT

public:
	GongNengInterface(QObject *parent);
	~GongNengInterface();

	virtual void Attack();

private:
	
};

#endif // COMPONENTINTERFACE_H
