#ifndef MEMO_H
#define MEMO_H

#include <QtWidgets/QMainWindow>
#include "ui_memo.h"

class Memo : public QMainWindow
{
	Q_OBJECT

public:
	Memo(QWidget *parent = 0);
	~Memo();

private:
	Ui::MemoClass ui;


};

#endif // MEMO_H
