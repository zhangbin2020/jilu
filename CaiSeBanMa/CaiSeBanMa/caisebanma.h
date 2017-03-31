#ifndef CAISEBANMA_H
#define CAISEBANMA_H

#include <QtGui/QWidget>
#include "ui_caisebanma.h"
#include "WorkThread.h"

class CaiSeBanMa : public QWidget
{
	Q_OBJECT

public:
	CaiSeBanMa(QWidget *parent = 0, Qt::WFlags flags = 0);
	~CaiSeBanMa();

	private slots:
		void OnTime();
		void OnMoney();
		void OnStart();
		void OnShowRet( QString );

private:
	Ui::CaiSeBanMaClass ui;

	WorkThread* m_thread;
	double m_Rate;
	bool m_bStart;//1:ø™ º£ª0£∫÷ÿ÷√
};

#endif // CAISEBANMA_H
