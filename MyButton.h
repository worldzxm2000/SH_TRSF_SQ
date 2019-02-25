#pragma once

#include <QObject>
#include<QPushButton>
class MyButton : public QPushButton
{
	Q_OBJECT
		Q_PROPERTY(int curIndex READ getcurIndex WRITE setcurIndex)

public:
	MyButton(QWidget *parent = 0);
	MyButton(QString FileName, int xnum = 1, QWidget *parent = 0,
		int ynum = 1, QString bkGrnd = NULL);
	MyButton(QVector<QString> &list, QWidget *parent = 0, QString bkGrnd = NULL);
	void SetImage(QString FileName, int xnum = 1, int ynum = 1, QString bkGrnd = NULL);
	QList<QPixmap> *getPixmapList(void) { return &pixmatpList; }
	void setcurIndex(int index) { curIndex = index; update(); }
	int getcurIndex(void) { return curIndex; }
	void setToolTipName(QString ToolTipName);
private:
	void setPixmapList(QVector<QString> &list);
	QPixmap *background;
	QWidget *m_Parent;
	QString m_ToolTipName;
protected:
	QList<QPixmap> pixmatpList;
	int curIndex;

protected:
	virtual void paintEvent(QPaintEvent * event);
	virtual void enterEvent(QEvent *event);
	virtual void leaveEvent(QEvent * event);
	virtual void mousePressEvent(QMouseEvent * event);
	virtual void mouseReleaseEvent(QMouseEvent * event);
	virtual  QSize sizeHint() const;
};
