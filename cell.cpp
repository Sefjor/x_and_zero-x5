#include "cell.h"
Cell::Cell(int inc_x, int inc_y) : x{inc_x * width}, y{inc_y * width}
{
  matrix_x = inc_x;
  matrix_y = inc_y;
  rect = QRect(x, y, width, width);
}

Cell::Cell(int matrix_x, int matrix_y, Figure f) : Cell(matrix_x, matrix_y)
{
  figure = f;
  is_figure_draw_needed = true;
}

QRectF Cell::boundingRect() const
{
  return rect;
}
void Cell::paint(QPainter* painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  Q_UNUSED(option);
  Q_UNUSED(widget);
  painter->setPen(QPen(Qt::black, 1));
  painter->setBrush(Qt::transparent);
  painter->drawRect(rect);
  if (is_figure_draw_needed)
    {
       painter->setPen(QPen(Qt::black, 2));
      const int delta = 4;
      if (figure == Figure::CROSS)
        {
          painter->drawLine(x+delta, y+delta, x+width-delta, y+width-delta);
          painter->drawLine(x+width-delta, y+delta, x+delta, y+width-delta);
        }
      else
        {
          painter->drawEllipse(rect.center(), width/2 - delta, width/2 - delta);
        }
    }
}

void Cell::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
  Q_UNUSED(event);
  emit Clicked(matrix_x, matrix_y);
}



