#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  ui->graphics->setScene(&scene);
  for (int i = 0; i < 10; ++i)
    for (int j = 0; j < 10; ++j)
      {
        Cell* cell = new Cell(i, j);
        matrix[i][j] = cell;
        scene.addItem(cell);
        connect(cell, &Cell::Clicked, [this](int x, int y) {
            Cell* cell = new Cell(x, y, Figure::CROSS);
            scene.addItem(cell);
          });
      }
}

MainWindow::~MainWindow()
{
  delete ui;
}
