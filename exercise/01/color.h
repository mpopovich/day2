#pragma once

class color
{
public:
  color();
  color(double red, double green, double blue);
  color(const color& Color);
  ~color();

  bool operator==(const color& second) const;

  double get_red() const;
  double get_green() const;
  double get_blue() const;

  void set_red(double red);
  void set_green(double green);
  void set_blue(double blue);

  COLORREF get_color_ref();
  double get_luminance();
 
private:
  double m_fRed;
  double m_fGreen;
  double m_fBlue;

  static double const m_MinValue;
  static double const m_MaxValue;
};

