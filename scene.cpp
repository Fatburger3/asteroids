#include "scene.h"
#include "ship.h"

/*************************************************************************************/
/******************** Scene representing the simulated landscape *********************/
/*************************************************************************************/

/************************************ constuctor *************************************/

Scene::Scene(qreal x, qreal y) : QGraphicsScene()
{  // create invisible item to provide default top-left anchor to scene
    addLine( 0, 0, 0, 1, QPen(Qt::transparent, 1) );

    addItem(


                ship = new Ship(x/2,y/2)


            );

}
