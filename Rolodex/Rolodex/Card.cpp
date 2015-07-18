#include "Card.h"
#include <iostream>

Card::Card(string fname, string lname, string occ, string addr, string phone)
{
  firstname = fname;
  lastname = lname;
  occupation = occ;
  address = addr;
  phoneNumber = phone;
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

void Card::show(Card& card){
  // I think this is supposed to just print out the card requested to the console
  cout << firstname << endl;
}