#include "Rolodex.h"
#include "Card.h"
#include <sstream>

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

  cout << "Welcome to Rolodex." << endl << "Make a selection, your options are as shown:" << endl <<
    "list - Display the entire Rolodex." << endl <<
    "view - Display the currently selected card." << endl <<
    "flip - Displays the next card in the Rolodex." << endl <<
    "add - Add a new card to the Rolodex" << endl <<
    "remove - Remove the currently selected card." << endl <<
    "search - Find and display a card." << endl <<
    "quit - Exit the program." << endl;
  std::stringstream os;
  string output;
  while (output != "quit"){
    cout << endl << "Enter your selection: ";
    cin >> output;

    if (output == "list"){
      rolo.show(os);
    }
    else if (output == "view"){
      Card card = rolo.getCurrentCard();
      card.show(os);
    }
    else if (output == "flip"){
      Card card = rolo.flip();
      card.show(os);
    }
    else if (output == "add"){
      string firstname, lastname, occupation, address, phoneNumber;
      cout << endl << "Enter first name: ";
      cin >> firstname;
      cout << "Enter last name: ";
      cin >> lastname;
      cout << "Enter occupation: ";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      getline(cin, occupation);
      cout << "Enter address: ";
      getline(cin, address);
      cout << "Enter phone number: ";
      getline(cin, phoneNumber);
      rolo.add(Card(firstname, lastname, occupation, address, phoneNumber));
      Card card = rolo.getCurrentCard();
      card.show(os);
    }
    else if (output == "remove"){
      cout << endl << "Are you sure you want to remove: " << endl;
      Card card = rolo.getCurrentCard();
      card.show(os);
      string answer;
      cin >> answer;
      if (answer == "Y" || answer == "y" || answer == "Yes" || answer == "yes")
        rolo.remove();
      cout << "Card removed. Current card is now: " << endl;
      card = rolo.getCurrentCard();
      card.show(os);
    }
    else if (output == "search"){
      string firstname, lastname;
      cout << "Enter the first name of the person: " << endl;
      cin >> firstname;
      cout << "Enter the last name of the person: " << endl;
      cin >> lastname;
      if (rolo.search(firstname, lastname)){
        cout << endl << "Card found. Current card is now: " << endl;
        Card card = rolo.getCurrentCard();
        card.show(os);
      }
      else{
        cout << endl << "Card not found. Current card is still: " << endl;
        Card card = rolo.getCurrentCard();
        card.show(os);
      }
    }
    else if (output == "quit"){
      cout << "Goodbye..." << endl;
    }
  }

  /* view - displays card at the current position in rolodex. can call Rolodex::getCurrentCard()
  then call Card::show(..) on the returned card*/
  //void view

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