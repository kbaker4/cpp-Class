#include "INT.h"

INT::INT(){
  theInt = 0;
}

INT::INT(int x){
  theInt = x;
}

INT::INT(INT& num){
  this->theInt = num.theInt;
}


INT::~INT(){
}

ostream& operator<<(ostream &out, INT &num){
  out << num.theInt;
  return out;
}

istream& operator>>(istream &in, INT &num){
  in >> num.theInt;
  return in;
}

INT operator+(const INT &first, const INT &second){
  return INT(first.theInt + second.theInt);
}

INT operator-(const INT &first, const INT &second){
  return INT(first.theInt - second.theInt);
}

INT operator*(const INT &first, const INT &second){
  return INT(first.theInt * second.theInt);
}

INT operator/(const INT &first, const INT &second){
  return INT(first.theInt / second.theInt);
}

INT& INT::operator=(const INT &num){
  theInt = num.theInt;
  return *this;
}

INT& INT::operator++(){
  if (theInt == 9)
    theInt = 0;
  else
    ++theInt;
}

INT& INT::operator--(){
  if (theInt == 0)
    theInt = 9;
  else
    --theInt;
}