#include "stdafx.h"
#include "color.h"


double const color::m_MinValue = 0.0;
double const color::m_MaxValue = 1.0;

color::color()
{
  m_fRed = 0.0;
  m_fGreen = 0.0;
  m_fBlue = 0.0;
}

color::color(double red, double green, double blue)
{  
  set_red(red);     
  set_green(green);
  set_blue(blue);
}

color::color(const color& Color)
{
  m_fRed = Color.get_red();
  m_fGreen = Color.get_green();
  m_fBlue = Color.get_blue();
}

color::~color()
{
}

bool color::operator==(const color& second) const
{
  return
    ((m_fRed == second.get_blue())    &&
     (m_fGreen == second.get_green()) &&
     (m_fBlue == second.get_blue()) );
}

double color::get_red() const
{
  return m_fRed;
}

double color::get_green() const
{
  return m_fGreen;
}

double color::get_blue() const
{
  return m_fBlue;
}


void color::set_red(double red)
{
  m_fRed = std::clamp(red, m_MinValue, m_MaxValue);
}

void color::set_green(double green)
{
  m_fGreen = std::clamp(green, m_MinValue, m_MaxValue);
}

void color::set_blue(double blue)
{
  m_fBlue = std::clamp(blue, m_MinValue, m_MaxValue);
}

COLORREF color::get_color_ref()
{
  unsigned long red = (unsigned long)(m_fRed * 255);
  unsigned long green = (unsigned long)(m_fGreen * 255);
  unsigned long blue = (unsigned long)(m_fBlue * 255);

  return RGB(red, green, blue);
}

double color::get_luminance()
{
  return (double)(0.2126 * m_fRed + 0.7152 * m_fGreen + 0.0722 * m_fBlue);
}