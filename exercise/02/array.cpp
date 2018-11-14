#include "array.h"


array::array():
  m_iSize(0),
  m_pToArray(nullptr)
{
}


array::array(int size, double value):
  m_iSize(0),
  m_pToArray(nullptr)
{
  if (size < 0)
  {
    throw std::out_of_range("Array size can't be negative! Aborting...");
  }

  m_pToArray = new double[size];
  m_iSize = size;

  for (int i = 0; i < size; i++)
  {
    m_pToArray[i] = value;
  }
}


array::array(const array& Array):
  m_iSize(0),
  m_pToArray(nullptr)
{
  if (Array.m_iSize > 0)
  {
    m_pToArray = new double[Array.m_iSize];
    m_iSize = Array.m_iSize;

    for (int i = 0; i < m_iSize; i++)
    {
      m_pToArray[i] = Array.m_pToArray[i];
    }
  }
}


array::~array()
{
  if (m_pToArray)
  {
    delete[] m_pToArray;
    m_pToArray = nullptr;
  }
}


int array::size()
{
  return m_iSize;
}


double array::at(int index) const
{
  if (index < 0 || index > m_iSize)
  {
    throw std::out_of_range("Index of array is out of range! Aborting...");
  }

  return m_pToArray[index];
}


array& array::operator=(const array& second)
{
  array temp(second);

  std::swap(m_pToArray, temp.m_pToArray);
  std::swap(m_iSize, temp.m_iSize);

  return *this;
}