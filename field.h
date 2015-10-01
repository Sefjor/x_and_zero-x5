#ifndef FIELD_H
#define FIELD_H
#include <array>
#include <field_size.h>
#include <figure_enum_class.h>

enum CellState
{
  NOTHING = 0
  ,ZERO = 1
  ,CROSS = 2
};

class Field
{
public:
  Field();
  bool Turn(int, int, Figure);
private:
  std::array<std::array<CellState, field_size_x>, field_size_y> matrix {CellState::NOTHING};
};
#endif // FIELD_H
