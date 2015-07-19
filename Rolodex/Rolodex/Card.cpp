#include "Card.h"
#include <iostream>

Card::Card(Card* newCard)
{
  firstname = newCard->firstname;
  lastname = newCard->lastname;
  occupation = newCard->occupation;
  address = newCard->address;
  phoneNumber = newCard->phoneNumber;
}

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

void const Card::show(ostream& os){
  os << endl << "Name: " << firstname << " " << lastname << endl
    << "Occupation: " << occupation << endl
    << "Address: " << address << endl
    << "Phone Number: " << phoneNumber << endl;
  return;
}