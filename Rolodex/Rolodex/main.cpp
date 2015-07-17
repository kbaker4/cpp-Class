void main(){
  /* defines and loads the rolodex object with the starting data (add a series of cards)
     then accepts interactive requests that act on the rolodex
     for each interactive command, main() invokes one or more member functions on the rolodex object*/

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