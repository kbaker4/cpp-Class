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
  INT(int x); // default ctor
  INT(const INT& num); // copy ctor
  ~INT();

  friend ostream& operator<<(ostream &out, INT &num);
  friend INT operator+(const int &first, const INT &second);
  friend INT operator-(const int &first, const INT &second);
  friend INT operator*(const int &first, const INT &second);
  friend INT operator/(const int &first, const INT &second);

  operator int() { return theInt; }

  INT& operator++();
  INT& operator--();
  INT operator++(int);
  INT operator--(int);
  INT& operator+=(const int &num);
  INT& operator-=(const int &num);

};
