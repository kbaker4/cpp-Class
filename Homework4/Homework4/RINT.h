#pragma once
#include <iostream>
using std::ostream;
using std::istream;

class RINT
{
private:
  int theInt;

public:
  RINT();
  RINT(int x); // default ctor
  RINT(const RINT& num); // copy ctor
  ~RINT();

  friend ostream& operator<<(ostream &out, RINT &num);
  friend istream& operator>>(istream &in, RINT &num);
  friend RINT operator+(const RINT &first, const int &second);
  friend RINT operator-(const RINT &first, const int &second);
  friend RINT operator+(const RINT &first, const RINT &second);
  friend RINT operator-(const RINT &first, const RINT &second);
  friend RINT operator-(const RINT &first);
  friend RINT operator+(const RINT &first);
  
};
