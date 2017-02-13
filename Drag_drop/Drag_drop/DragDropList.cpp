#include "DragDropList.h"
#include <QApplication>
#include <QMimeData>
#include <QDrag>


DragDropList::DragDropList(QWidget *parent)
	: QListWidget(parent)
{
	//允许拖动
	setAcceptDrops(true);

	for (int i = 0; i < 10; ++i)
	{
		this->addItem(QString::number(i));
	}
}

DragDropList::~DragDropList()
{

}

//只需要记下开始坐标
void DragDropList::mousePressEvent(QMouseEvent *e)
{
	if ( e->button() == Qt::LeftButton )
	{
		m_start = e->pos();
	}

	return QListWidget::mousePressEvent(e);
}


//判断是否开始 一个拖动，
void DragDropList::mouseMoveEvent(QMouseEvent *e)
{
	if ( e->buttons() | Qt::LeftButton )			//if ( e->button() == Qt::LeftButton )不能用这个
	{
		int nDis = (e->pos() - m_start).manhattanLength();
		if ( nDis > QApplication::startDragDistance() )
		{
			PerfomDrag();
		}
	}
}


//dragEnterEvent 允许拖动
void DragDropList::dragEnterEvent(QDragEnterEvent *e)
{
	DragDropList *source =
		qobject_cast<DragDropList *>(e->source());

	if (source /*&& source != this*/) {
		e->setDropAction(Qt::MoveAction);
		e->accept();
	}
}

//同dragEnterEvent
//dragMoveEvent 允许拖动
void DragDropList::dragMoveEvent(QDragMoveEvent *e)
{
	DragDropList *source =
		qobject_cast<DragDropList *>(e->source());

	if (source /*&& source != this*/) {
		e->setDropAction(Qt::MoveAction);
		e->accept();
	}
}


//从QDropEvent中得到QMimeData
void DragDropList::dropEvent(QDropEvent *event)
{
	DragDropList *source =
		qobject_cast<DragDropList *>(event->source());

	if (source /*&& source != this*/) {
		addItem(event->mimeData()->text());
		event->setDropAction(Qt::MoveAction);
		event->accept();
	}
}


//只需要创建一个QMimeData和QDrag
void DragDropList::PerfomDrag()
{
	QListWidgetItem *item = currentItem();
	if (item) {

		//创建mimeData
		QMimeData *mimeData = new QMimeData;
		mimeData->setText(item->text());

		//创建QDrag
		QDrag *drag = new QDrag(this);
		drag->setMimeData(mimeData);
		drag->setPixmap(QPixmap(":/images/person.png"));

		//执行QDrag
		if (drag->exec(Qt::MoveAction) == Qt::MoveAction)
			delete item;
	}
}