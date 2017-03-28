#ifndef CAISEBANMA_H
#define CAISEBANMA_H

#include <QtGui/QWidget>
#include "ui_caisebanma.h"
#include <QTimer>

class CaiSeBanMa : public QWidget
{
	Q_OBJECT

public:
	CaiSeBanMa(QWidget *parent = 0, Qt::WFlags flags = 0);
	~CaiSeBanMa();

private slots:
	void OnStartBtn();
	void OnStopBtn();
	void OnResetBtn();
	void OnTimeChanged(const QString&);
	void OnMoneyChanged(const QString&);
	void OnTimer();

private:
	void InitConnectSignals();
	
private:
	Ui::CaiSeBanMaClass ui;

	qint64 m_time;
	double m_money;
	double m_Rate;
	QTimer* m_timer;
};

#endif // CAISEBANMA_H
