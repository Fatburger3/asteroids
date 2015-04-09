
#ifndef SCENE_H
#define SCENE_H
#include <QGraphicsScene>

/*************************************************************************************/
/******************** Scene representing the simulated landscape *********************/
/*************************************************************************************/
class Ship;
class Scene : public QGraphicsScene
{
  Q_OBJECT
public:
  Scene(qreal,qreal);                                      // constructor
signals:
  void  message( QString );                                  // info text message signal

protected:
  Ship*ship;
};

#endif  // SCENE_H
