#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#define WINDOW_SIZE 500
/*************************************************************************************/
/*********************** Main application window for QSimulate ***********************/
/*************************************************************************************/
class Scene;
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
  MainWindow();
private:
  Scene*       m_scene;
public slots:
  void showMessage( QString );        // show message on status bar
  void newGame();
};

#endif  // MAINWINDOW_H
