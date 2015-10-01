#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <array>
#include "cell.h"
#include "field_size.h"
namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

private:
  Ui::MainWindow *ui;
  QGraphicsScene scene;
  std::array<std::array<Cell*, field_size_x>, field_size_y> matrix;
};

#endif // MAINWINDOW_H
