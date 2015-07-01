#include "RINT.h"

RINT::RINT(){
  theInt = 0;
}

RINT::RINT(int x){ // default ctor
  theInt = x;
}

RINT::RINT(const RINT& num){ // copy ctor
  theInt = num.theInt;
}

RINT::~RINT(){
}

ostream& operator<<(ostream &out, RINT &num){
  out << num.theInt;
  return out;
}

istream& operator>>(istream &in, RINT &num){
  in >> num.theInt;
  return in;
}

RINT operator+(const RINT &first, const int &second){
  return RINT(first.theInt + second);
}

RINT operator-(const RINT &first, const int &second){
  return RINT(first.theInt - second);
}

RINT operator+(const RINT &first, const RINT &second){
  return RINT(first.theInt + second.theInt);
}

RINT operator-(const RINT &first, const RINT &second){
  return RINT(first.theInt - second.theInt);
}

RINT operator-(const RINT &first){
  return RINT(-first.theInt);
}

RINT operator+(const RINT &first){
  return RINT(+first.theInt);
}