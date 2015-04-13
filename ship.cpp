#include "ship.h"

#include <QPainter>

/*************************************************************************************/
/******************* Represents a radio Ship in the simulation ********************/
/*************************************************************************************/

/************************************ constuctor *************************************/

Ship::Ship( qreal x, qreal y ) : QGraphicsItem()
{
  // set Ship pixmap and position
  setPos( x, y );
}

/************************************** paint ****************************************/

void  Ship::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  painter->setRenderHint( QPainter::Antialiasing );
  painter->setPen( QPen( Qt::white, 2 ));


  int x = 6;
  int y = 3;
  painter->drawLine(0,0,x,x*y);
  painter->drawLine(0,0,-x,x*y);
  painter->drawLine(x-1,(x-1)*y,1-x,(x-1)*y);
}
