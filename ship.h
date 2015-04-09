#ifndef Ship_H
#define Ship_H

#include <QGraphicsItem>

/*************************************************************************************/
/******************* Represents a radio Ship in the simulation ********************/
/*************************************************************************************/

class Ship : public QGraphicsItem
{
public:
  Ship( qreal, qreal );                          // constructor

  void paint(QPainter*, const QStyleOptionGraphicsItem*, QWidget*); // implement virtual paint function
  QRectF boundingRect() const
  {
      return QRectF(-6.5, -13, 13, 18);
  }// implement virtual boundingRect
};

#endif // Ship_H
