#include "Card.h"


Card::Card()
{
}


Card::~Card()
{
}

void Card::setFirstname(string fname){
  firstname = fname;
}
void Card::setLastname(string lname){
  lastname = lname;
}
void Card::setOccupation(string occ){
  occupation = occ;
}
void Card::setAddress(string addr){
  address = addr;
}
void Card::setPhoneNumber(string phone){
  phoneNumber = phone;
}