#include "Rolodex.h"

Rolodex::Rolodex()
{
}


Rolodex::~Rolodex()
{
}

/*Takes a card object as a param (by ref is more efficient), adds it to the STL container member(in appropriate spot -
cards are kept in abc order by last name, first name), and sets it as current card in the rolodex by setting the STL iterator
member to point at the card just added*/
void Rolodex::add(Card newCard){
  Card *card = new Card(newCard);
  rolo.push_back(card);
  pCurrentCard = card;
  it = find(rolo.begin(), rolo.end(), pCurrentCard);
  sort(rolo.begin(), rolo.end());
}

/*removes the current card from the rolodex stl container, returns it, and makes the following card the 'current card'.
if the last card in the STL container is removed, current card should be set to first card (wraps)*/
void Rolodex::remove(){
  it = find(rolo.begin(), rolo.end(), pCurrentCard);
  rolo.erase(it);
  *pCurrentCard = flip();
}

/* iterate thru all the cards in the STL container from beginning to end, invoking each card's show() method, and passing
the ostream param. the rolodex show() doesn't do any actual output, itjust iterates thru the collection and requests
each card to display its contents by calling its show() member function. current card remains unchanged*/
void Rolodex::show(ostream& os){
  it = rolo.begin();
  while (it != rolo.end()){
    it->show(os);
    it++;
  }
}

/*updates current card position to the next card in the rolodex STL container, and returns that card, if last card
is flipped, wrap to the first card*/
Card Rolodex::flip(){
  it = find(rolo.begin(), rolo.end(), pCurrentCard);
  if (it == (rolo.end() -1) || it == rolo.end())
    it = rolo.begin();
  else
    ++it;
  *pCurrentCard = *it;
  return *pCurrentCard;
}

/*finds the request card and sets it as the current card and returns true indicating the search found a card. if no
matching card found, the card that immediately follows the lookup name is displayed and set as the current position.
eg if H is entered as last name, the first card with a last name following H in abc order is displayed.
if there is no following card, the current position remains unchanged and false is returned*/
bool Rolodex::search(const string& fName, const string& lName){
  it = rolo.begin();
  bool found = false;
  while (it != rolo.end()){
    if (it->firstname == fName && it->lastname == lName){
      *pCurrentCard = *it;
      found = true;
      return found;
    }
    it++;
  }
  return found;
}