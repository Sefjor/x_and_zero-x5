#include "field.h"
#include "field_size.h"
Field::Field()
{

}

bool Field::Turn(int x, int y, Figure f)
{
  if (matrix[x][y] = CellState::NOTHING)
    {
      matrix[x][y] = f == Figure::CROSS ? CellState::CROSS : CellState::ZERO;
      return true;
    }
  else
    return false;
}

