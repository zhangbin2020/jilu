#ifndef SUBJECTINTERFACE_H
#define SUBJECTINTERFACE_H

#include <QObject>

class SubjectInterface : public QObject
{
	Q_OBJECT

public:
	SubjectInterface(QObject *parent=0);
	~SubjectInterface();


	QString m_name;
	
};

#endif // SUBJECTINTERFACE_H
