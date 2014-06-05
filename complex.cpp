#include "complex.h"
#include <iostream>
using namespace std;

Complex::Complex()
{
  real_ = 0;
  imag_ = 0;
}

Complex::Complex(int r, int i)
{
  real_ = r;
  imag_ = i;
}  

Complex Complex::add(const Complex& rhs) const
{
  Complex temp;
  temp.real_ = real_ + rhs.real_;
  temp.imag_ = imag_ + rhs.imag_;
  return temp;
}

