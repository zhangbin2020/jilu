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

	if (source ) 
	{
		e->accept();//++++++++++这一句设置必须要有，否则不允许拖动
	}
}

//同dragEnterEvent
//dragMoveEvent 允许拖动
void DragDropList::dragMoveEvent(QDragMoveEvent *e)
{
	DragDropList *source =
		qobject_cast<DragDropList *>(e->source());

	if (source )
	{
		//e->accept();//dragMoveEvent中可以不设置
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
		drag->setMimeData(mimeData);//++++++++++++++++mimeData必须要有，即使不需要用mimeData中的数据，
		drag->setPixmap(QPixmap(":/images/person.png"));

		//执行QDrag
		if (drag->exec(Qt::MoveAction) == Qt::MoveAction)
			delete item;
	}
}