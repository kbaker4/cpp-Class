#include "Rolodex.h"

void main(){
  /* defines and loads the rolodex object with the starting data (add a series of cards)
     then accepts interactive requests that act on the rolodex
     for each interactive command, main() invokes one or more member functions on the rolodex object*/
  Rolodex rolo;

  // initial information for Rolodex
  rolo.add(Card("Tony", "Hansen", "Writer", "12 E. St. NY, NY 33333", "555-9999"));
  rolo.add(Card("Jon", "Smyth", "Computer Hardware", "CMU Computer Services Pittsburgh, PA", "555-1324"));
  rolo.add(Card("Alonza", "Heard", "Mechanic", "123 Anyplace Ave Malden, MA", "555-5678"));
  rolo.add(Card("Jen", "Reyes", "Graphic artist", "325 Oak Rd Wilmington, MA", "555-4950"));
  rolo.add(Card("Alan", "Lupine", "Vet", "1 Bigelow Ave. Lawrence, MA", "555-7654"));
  rolo.add(Card("Jewel", "Proverb", "Landscaper", "34 Washington St. Waltham, MA", "555-3333"));
  rolo.add(Card("Paul", "Revere", "Radical Revolutionary", "45 Commonwealth Ave. Boston, MA", "555-1776"));
  rolo.add(Card("Adolf", "Coors", "Beer Manufacturer", "Boston MA", "555-2337"));
  rolo.add(Card("Seymour", "Papert", "Lego Professor", "MIT", "555-1111"));
  rolo.add(Card("Fred", "Milton", "Sales", "12 Freedom Way Nashua, NH", "555-9981"));

  /* list - displays the entire rolodex. can call Rolodex::show(..) to display all cards*/
  /* view - displays card at the current position in rolodex. can call Rolodex::getCurrentCard()
  then call Card::show(..) on the returned card*/
  /*flip - updates the current rolodex position to the next card and displays it. flipped past the last wraps to front
  can call Rolodex::flip() to get next Card, then call Card::show(..) on it*/

  /*add - adds new card to rolodex. prompts for each field value, reads them, and creates new card oject
  with the info, then calls Rolodex::add(...) to add the new Card to the rolodex (puts it in correct position)*/

  /* remove - removes card at the current position. first called Rolodex::getCurrentCard(), calls
  Card::show(...) on the returned card to display it as part of the confirm prompt, and if yes is entered
  to remove it, it calls Rolodex::remove() to remove it.*/

  /*search - finds and displays a card, makes it current card in rolodex. this command prompts for last name and
  first name for searching. if a matching card is found, it is displayed and is set as current position.
  it calls Rolodex::search(...) and checks the boolean return value to see if card was found*/

  /*quit - exits the program*/
}