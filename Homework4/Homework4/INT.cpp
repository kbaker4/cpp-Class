#include "INT.h"

INT::INT(){
  theInt = 0;
}

INT::INT(int x){ // default ctor
  theInt = x;
}

INT::INT(const INT& num){ // copy ctor
  theInt = num.theInt;
}

INT::~INT(){
}

ostream& operator<<(ostream &out, INT &num){
  out << num.theInt;
  return out;
}

INT operator+(const int &first, const INT &second){
  return INT(first + second.theInt);
}

INT operator-(const int &first, const INT &second){
  return INT(first - second.theInt);
}

INT operator*(const int &first, const INT &second){
  return INT(first * second.theInt);
}

INT operator/(const int &first, const INT &second){
  return INT(first / second.theInt);
}

INT& INT::operator++(){
    ++theInt; 
  return *this;
}

INT& INT::operator--(){
    --theInt;
  return *this;
}

INT INT::operator++(int){
  INT result(theInt);
  ++(this->theInt); 
  return result;
}

INT INT::operator--(int){
  INT result(theInt);
  --(*this);
  return result;
}

INT& INT::operator+=(const int &num){
  theInt = theInt + num;
  return *this;
}

INT& INT::operator-=(const int &num){
  theInt = theInt - num;
  return *this;
}