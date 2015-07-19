#pragma once
#include "Card.h"
#include <vector>
#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

class Rolodex
{
private:
  Card* pCurrentCard;
public:
  Rolodex();
  ~Rolodex();

  // data member that is an STL container class to hold the set of card objects
  // STL container used must be able to handle case of duplicate names
  // Rolodex member functions just manage the STL collection of cards, and may have params or return values that are a Card object
  // rolodex class doesn't have code to read data for new cards, printing cards
  // data input is done by code in main() and card objects are passed into and out of rolodex object
  // displaying cards is done by the rolodex code calling the cards display (show?) member function, passing an
  // ostream for it to display on.

  vector<Card> rolo;
  vector<Card>::iterator it;

  // member functions:
  void add(Card newCard);
  /*Takes a card object as a param (by ref is more efficient), adds it to the STL container member(in appropriate spot -
  cards are kept in abc order by last name, first name), and sets it as current card in the rolodex by setting the STL iterator
  member to point at the card just added*/

   /* remove()
  removes the current card from the rolodex stl container, returns it, and makes the following card the 'current card'.
  if the last card in the STL container is removed, current card should be set to first card (wraps)*/
  
  //returns the current card (a copy of it)
  Card getCurrentCard(){ return *pCurrentCard; }
  
  /*updates current card position to the next card in the rolodex STL container, and returns that card, if last card
  is flipped, wrap to the first card*/
  Card flip();
  
  /*search(const std::string& lastname, const std::string& firstname)
  finds the request card and sets it as the current card and returns true indicating the search found a card. if no 
  matching card found, the card that immediately follows the lookup name is displayed and set as the current position.
  eg if H is entered as last name, the first card with a last name following H in abc order is displayed.
  if there is no following card, the current position remains unchanged and false is returned*/

  /* iterate thru all the cards in the STL container from beginning to end, invoking each card's show() method, and passing 
  the ostream param. the rolodex show() doesn't do any actual output, itjust iterates thru the collection and requests
  each card to display its contents by calling its show() member function. current card remains unchanged*/
  void show(ostream& os);

 // friend bool operator== (const Card &a, const Card &b);
  friend bool operator< (const Card &a, const Card &b);
};


//bool operator== (const Card &a, const Card &b){
//  return a.lastname == b.lastname;
//}

bool operator< (const Card &a, const Card &b){
  return a.lastname < b.lastname;
}