#include <iostream>
using namespace std;
#include <string>
#include <ctime>
#include <cstdlib>

int health = 50; 
int totalTreasure = 0;
int attack;
int block;

// Story
// return type is void

void story() {
cout << "As you wake up, you slowly take a look at the world around you.\n";
  cout << "It's a beautiful place. You have 50 health.\n";

  
} // end of void

  void story(string message) {
    cout << message << "\n";
  } // end of void

// AskYesNo
// One string argument named "question" 
// return type is bool

bool askYN(string question) {
  cout << question << " (y/n)\n";
  char input;
  cin >> input;

  if(input == 'y' || input == 'Y') {
    return true;
  } // end of if

  else if(input == 'n' || input == 'N') {
    return false;
  } // end of else if
  
} // end of bool

// RollDie
// one int parameter named "sides" with a default value of 6
// return type is int

int rollDie(int sides = 6) {
  int roll = rand() % sides + 1;
  return roll;
} // end of int

// Ending
// return type is void

void ending() {
  cout << "You go home with " << totalTreasure << " treasure.\n";
}

// Adventure
// return type is void or bool
// calls rollDie for attack, block, & treasure
// tells the player their health after the encounter

void adventure () {
  attack = rollDie(10);
  block = rollDie(10);
  int treasure = rollDie(10);

  cout << "An enemy attacks!\n";

  if (attack > block) {
    cout << "You tried to block, but failed. " << attack << " damage done.\n";

    health -=attack;

    cout << "You have " << health << " health and " << totalTreasure << " treasure.\n";
  }// end of if

  if (health <= 0) {
    cout << "Your health is now 0. You have died. All the treasure you collected will go to waste.\n";
  }

  if (block >= attack) {
    cout << "Your block was successful.\n";

    totalTreasure += treasure;

    cout << "You gained " << treasure << " treasure.\n";

    cout << "You have " << health << " health and " << totalTreasure << " treasure.\n";
  }

  
}// end of void

// obviously main
// calls story,
// has a loop for adventure,
// checks for health
// calls ending

// Create the following global variables:
// health
// totalTreasure



// The game should run as follows:
// The player is told a story prompting them to seek treasure on an adventure.
// The player is asked if they would like to go adventuring.
// If the player says yes, numbers for an enemy attack, their own block, and an amount of treasure are randomly generated.
// if the player's block is higher than the enemy attack, they have successfully blocked and they receive the treasure.
// However, if the attack is higher, that number is subtracted from their health and they do not get the treasure.
// The player is then told their health and amount of totalTreasure and asked if they would like to adventure again.
// They can continue to adventure as long as their health is greater than zero, at which point the ending is run and they are told that they are dead.
// If they instead quit before their health is zero, they are told how much health they have and how much treasure they ended up with.




int main() {
  story();
  srand(time(0));

  while (health > 0) {
    if(askYN("Would you like to go on an adventure?") == true) {
      cout << "Let's begin your journey.\n";

      cout << "You have " << health << " health and " << totalTreasure << " treasure.\n";

      adventure();

      
    } //end of if 
    else {
      ending();
      break;
    } // end of else
  } // end of while

  if (health <= 0) {

    cout << "You have died. Now all the treasure you collected will go to waste.\n";
  }

} // end of int main