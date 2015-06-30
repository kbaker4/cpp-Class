#pragma once
#include <iostream>
using std::ostream;
using std::istream;
class INT
{
private:
  int theInt;

public:
  INT();
  INT(int x);
  INT(INT& num);
  ~INT();

  friend ostream& operator<<(ostream &out, INT &num);
  friend istream& operator>>(istream &in, INT &num);
  friend INT operator+(const INT &first, const INT &second);
  friend INT operator-(const INT &first, const INT &second);
  friend INT operator*(const INT &first, const INT &second);
  friend INT operator/(const INT &first, const INT &second);

  INT& operator=(const INT &num);

  INT& operator++();
  INT& operator--();

};
