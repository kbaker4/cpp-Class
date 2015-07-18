#include "Rolodex.h"


Rolodex::Rolodex()
{
}


Rolodex::~Rolodex()
{
}

void Rolodex::add(Card& newCard){
  Card *card = new Card(newCard);
}

void Rolodex::show(Card& card){
  card.show;
}