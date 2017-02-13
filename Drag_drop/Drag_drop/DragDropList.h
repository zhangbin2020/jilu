#ifndef DRAGDROPLIST_H
#define DRAGDROPLIST_H

#include <QObject>
#include <QListWidget>
#include <QMouseEvent>
#include <QDragEnterEvent>
#include <QDragMoveEvent>
#include <QDropEvent>

class DragDropList : public QListWidget
{
	Q_OBJECT

public:
	DragDropList(QWidget *parent);
	~DragDropList();

protected:
	void mousePressEvent(QMouseEvent *e);
	void mouseMoveEvent(QMouseEvent *e);
	void dragEnterEvent(QDragEnterEvent *e);
	void dragMoveEvent(QDragMoveEvent *e);
	void dropEvent(QDropEvent *event);

private:
	void PerfomDrag();

private:
	QPoint m_start;
};

#endif // DRAGDROPLIST_H
