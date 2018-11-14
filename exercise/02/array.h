// do not use standard container as member or base class

#include <stdexcept>

class array
{
public:
  array();
  array(int size, double value);
  array(const array& Array);
  ~array();

  array& operator=(const array&);

  int size();
  double at(int index) const;

private:
  double* m_pToArray;
  int m_iSize;
};
