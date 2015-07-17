#pragma once
using namespace std;
#include <string>
class Card
{
public:
  Card();
  ~Card();

  string firstname, lastname, occupation, address, phoneNumber;

  string getFirstname() { return firstname; }
  string getLastname() { return lastname; }
  string getOccupation() { return occupation; }
  string getAddress() { return address; }
  string getPhoneNumber() { return phoneNumber; }

  void setFirstname(string fname);
  void setLastname(string lname);
  void setOccupation(string occ);
  void setAddress(string addr);
  void setPhoneNumber(string phone);

  //std::string for first name, last name, occupation, address(one string), and phone number
  //get/set member functions to allow get/set of the member variables ^^^
  // show function that knows how to display a card on the supplied ostream param
};

