
class point
{
public:
  point();
  point(int x, int y);
  ~point();

  bool operator==(const point& second);
  bool operator!=(const point& second);
  bool operator<(const point& second);

private:
  int m_x;
  int m_y;
};