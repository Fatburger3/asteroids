#include "ship.h"

#include <QPainter>

#define SHIP_SIZE 10
#define PEN_SIZE 2

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
  // paint Ship symbol, must be smaller than bounding rectangle
  painter->setRenderHint( QPainter::Antialiasing );
  painter->setPen( QPen( Qt::black, PEN_SIZE ));
  painter->drawLine(SHIP_SIZE, SHIP_SIZE*2, -SHIP_SIZE, SHIP_SIZE*2);
  painter->drawLine(0, 0, SHIP_SIZE, SHIP_SIZE*2);
  painter->drawLine(0, 0, -SHIP_SIZE, SHIP_SIZE*2);
}
