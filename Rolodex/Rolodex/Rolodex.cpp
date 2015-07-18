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
  it = rolo.end()-1;
  pCurrentCard = card;
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
  it = find(rolo.begin(), rolo.end(), &pCurrentCard);
  if (it == (rolo.end() -1) || it == rolo.end())
    it = rolo.begin();
  else
    ++it;
  *pCurrentCard = *it;
  return *pCurrentCard;
}