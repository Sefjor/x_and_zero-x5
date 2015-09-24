#ifndef CELL_H
#define CELL_H
#include <QGraphicsObject>
#include <QRect>
#include <QtWidgets>
#include <figure_enum_class.h>
#include <QObject>

class Cell : public QGraphicsObject
{
Q_OBJECT
signals:
  Clicked(int, int);
public:
  Cell(int, int);
  Cell(int, int, Figure);
  QRectF boundingRect() const Q_DECL_OVERRIDE;
  void paint(QPainter *inc_painter, const QStyleOptionGraphicsItem *option, QWidget *widget) Q_DECL_OVERRIDE;
   void mousePressEvent(QGraphicsSceneMouseEvent *event) Q_DECL_OVERRIDE;
private:
  const int width{20};
  int x, y, matrix_x, matrix_y;
  QRect rect;
  Figure figure;
  bool is_figure_draw_needed{false};
};

#endif // CELL_H
