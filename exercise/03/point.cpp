#include "point.h"

point::point():
  m_x(0),
  m_y(0)
{
}

point::point(int x, int y):
  m_x(x),
  m_y(y)
{
}

point::~point()
{
}

bool point::operator==(const point& second)
{
  return (m_x == second.m_x && m_y == second.m_y);
}

bool point::operator!=(const point& second)
{
  return (m_x != second.m_x || m_y != second.m_y);
}

bool point::operator<(const point& second)
{
  return (m_x <= second.m_x && m_y < second.m_y) || (m_x < second.m_x && m_y <= second.m_y);
}
