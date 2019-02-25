#include "MyButton.h"
#include<QToolTip>
#include <QPainter>
#include <QPaintEvent>
#include <QPixmap>
#include <QLabel>
#include <QDebug>

MyButton::MyButton(QString FileName, int xnum, QWidget *parent,
	int ynum, QString bkGrnd) :QPushButton(parent)
{
	setStyleSheet("QToolTip { color: white; background-color:rgb(77,77,77); border: none;}");
	m_ToolTipName = QString::fromLocal8Bit("未知");
	m_Parent = parent;
	QPixmap pixmap(FileName);

	for (int cnt = 0; cnt < xnum; ++cnt)
	{
		for (int y = 0; y < ynum; ++y)
		{
			pixmatpList.push_back(pixmap.copy(cnt * (pixmap.width() / xnum),
				y * (pixmap.height() / ynum),
				pixmap.width() / xnum,
				pixmap.height() / ynum));
		}
	}

	if (bkGrnd != NULL)
		background = new QPixmap(bkGrnd);
	else
		background = NULL;

	setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
	curIndex = 0;
}

void MyButton::SetImage(QString FileName, int xnum,
	int ynum, QString bkGrnd)
{
	setStyleSheet("QToolTip { color: white; background-color:rgb(77,77,77); border: none;}");
	QPixmap pixmap(FileName);

	for (int cnt = 0; cnt < xnum; ++cnt)
	{
		for (int y = 0; y < ynum; ++y)
		{
			pixmatpList.push_back(pixmap.copy(cnt * (pixmap.width() / xnum),
				y * (pixmap.height() / ynum),
				pixmap.width() / xnum,
				pixmap.height() / ynum));
		}
	}

	if (bkGrnd != NULL)
		background = new QPixmap(bkGrnd);
	else
		background = NULL;

	setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
	curIndex = 0;
	update();
}
MyButton::MyButton(QVector<QString> &list, QWidget *parent,
	QString bkGrnd) :QPushButton(parent)
{
	setPixmapList(list);
	setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

	if (bkGrnd != NULL)
		background = new QPixmap(bkGrnd);
	else
		background = NULL;

	curIndex = 0;
}

MyButton::MyButton(QWidget *parent)
{

}

void MyButton::setPixmapList(QVector<QString> &list)
{
	if (list.size() <= 0) return;
	pixmatpList.clear();

	for (QVector<QString>::iterator pos = list.begin();
		pos != list.end(); ++pos)
	{
		pixmatpList.push_back(QPixmap(*pos));
	}
}

void MyButton::paintEvent(QPaintEvent * event)
{
	QPainter painter(this);
	if (pixmatpList.count() == 0)
		return;
	painter.drawPixmap(event->rect(), pixmatpList[curIndex]);
}

void MyButton::enterEvent(QEvent *event)
{
	setToolTip(m_ToolTipName);
	m_Parent->setStyleSheet(QString("QWidget{background:rbg(77,77,77);}"));
	if (pixmatpList.size() > 1)
		curIndex = 1;
	else
		curIndex = 0;
	update();
	QPushButton::enterEvent(event);
}

void MyButton::leaveEvent(QEvent *event)
{
	m_Parent->setStyleSheet(QString("QWidget{background:rgb(100,100,100)}"));
	curIndex = 0;
	update();
	QPushButton::leaveEvent(event);
}

void MyButton::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton)
	{
		m_Parent->setStyleSheet(QString("QWidget{background:rgb(0,0,0)}"));
		if (pixmatpList.size() > 2)
		{
			curIndex = 2;
			update();
		}
	}
	QPushButton::mousePressEvent(event);
}

void MyButton::mouseReleaseEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton)
	{
		if (pixmatpList.size() > 1)
		{
			curIndex = 1;
			update();
		}
	}
	QPushButton::mouseReleaseEvent(event);
}

QSize MyButton::sizeHint() const
{
	if (pixmatpList.count() == 0)
	{
		return QSize(0, 0);
	}
	return background != NULL ? QSize(background->width(), background->height()) :
		QSize(pixmatpList[0].width(), pixmatpList[0].height());
}

void MyButton::setToolTipName(QString ToolTipName)
{
	m_ToolTipName = ToolTipName;
}