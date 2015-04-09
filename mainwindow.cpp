
#include "mainwindow.h"
#include "scene.h"

#include <QMenuBar>
#include <QStatusBar>
#include <QGraphicsView>

/*************************************************************************************/
/*********************** Main application window for QSimulate ***********************/
/*************************************************************************************/

/************************************ constuctor *************************************/

MainWindow::MainWindow() : QMainWindow()
{
  // add drop down menus (currently empty)
  QMenu*fileMenu = menuBar()->addMenu(QString("&File"));


  QAction*newAction =  new QAction(QString("&New"), fileMenu);
  connect(newAction, SIGNAL(triggered()), this, SLOT(newGame()));
  fileMenu->addAction(newAction);

  QAction*exitAction =  new QAction(QString("&Exit"), fileMenu);
  connect(exitAction, SIGNAL(triggered()), this, SLOT(close()));
  fileMenu->addAction(exitAction);//*/
}

/************************************ showMessage ************************************/

void  MainWindow::showMessage( QString msg )
{
  // display message on main window status bar
  statusBar()->showMessage( msg );
}
void MainWindow::newGame()
{

    // create scene and central widget view of scene
    m_scene               = new Scene(width(),height());
    QGraphicsView*   view = new QGraphicsView( m_scene );
    view->setAlignment( Qt::AlignLeft | Qt::AlignTop );
    view->setFrameStyle( 0 );
    setCentralWidget( view );

    // connect message signal from scene to showMessage slot
    connect(m_scene, SIGNAL(message(QString)), this, SLOT(showMessage(QString)) );
}
