#include "DragDropList.h"
#include <QApplication>
#include <QMimeData>
#include <QDrag>


DragDropList::DragDropList(QWidget *parent)
	: QListWidget(parent)
{
	//�����϶�
	setAcceptDrops(true);

	for (int i = 0; i < 10; ++i)
	{
		this->addItem(QString::number(i));
	}
}

DragDropList::~DragDropList()
{

}

//ֻ��Ҫ���¿�ʼ����
void DragDropList::mousePressEvent(QMouseEvent *e)
{
	if ( e->button() == Qt::LeftButton )
	{
		m_start = e->pos();
	}

	return QListWidget::mousePressEvent(e);
}


//�ж��Ƿ�ʼ һ���϶���
void DragDropList::mouseMoveEvent(QMouseEvent *e)
{
	if ( e->buttons() | Qt::LeftButton )			//if ( e->button() == Qt::LeftButton )���������
	{
		int nDis = (e->pos() - m_start).manhattanLength();
		if ( nDis > QApplication::startDragDistance() )
		{
			PerfomDrag();
		}
	}
}


//dragEnterEvent �����϶�
void DragDropList::dragEnterEvent(QDragEnterEvent *e)
{
	DragDropList *source =
		qobject_cast<DragDropList *>(e->source());

	if (source ) 
	{
		e->accept();//++++++++++��һ�����ñ���Ҫ�У����������϶�
	}
}

//ͬdragEnterEvent
//dragMoveEvent �����϶�
void DragDropList::dragMoveEvent(QDragMoveEvent *e)
{
	DragDropList *source =
		qobject_cast<DragDropList *>(e->source());

	if (source )
	{
		//e->accept();//dragMoveEvent�п��Բ�����
	}
}


//��QDropEvent�еõ�QMimeData
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


//ֻ��Ҫ����һ��QMimeData��QDrag
void DragDropList::PerfomDrag()
{
	QListWidgetItem *item = currentItem();
	if (item) {

		//����mimeData
		QMimeData *mimeData = new QMimeData;
		mimeData->setText(item->text());

		//����QDrag
		QDrag *drag = new QDrag(this);
		drag->setMimeData(mimeData);//++++++++++++++++mimeData����Ҫ�У���ʹ����Ҫ��mimeData�е����ݣ�
		drag->setPixmap(QPixmap(":/images/person.png"));

		//ִ��QDrag
		if (drag->exec(Qt::MoveAction) == Qt::MoveAction)
			delete item;
	}
}