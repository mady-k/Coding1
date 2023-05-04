#include <cstdlib>     // for rand()
#include <ctime>      // for srand(time(0))
#include <iostream>
using namespace std;

//   welcome the player

int main() {
  srand(time(0));
  
  cout << "Hello, I've been expecting you.\n";

  string playerName = "Player";

  cout << "What should I call our new ruler?\n";

  cin >> playerName;

  cout << "Welcome, " << playerName << ". I hope your mission to become an overlord is successful.\n";


  // set up the game
//     int health = 10, attack, block, turns = 0
  int health = 10;
  int attack = 0;
  int block = 0;
  int turns = 0;
  cout << "\n";


  cout << "Your very first challenger has appeared! Make sure to block their attacks!\n";
  cout << "\n";
  cout << "Player Health = " << health << ".\n";
  cout << "\n";
  
//     seed the random number generator
//     start the encounter
  
cout << "A menace to society has appeared!\n";
  cout << "\n";
  
// start the loop

  while (turns < 4 && health > 0) {
//     add 1 to turns
    turns += 1;

    
    cout << "Turn " << turns << ".\n";

    

//         randomly generate numbers for attack (range = 0-4) and block (range = 0-4)
    int attack = rand() % 4 + 1;
    int block = rand() % 4 + 1;

    cout << "The menace attacks! You try to block!\n";

    if (attack > block) {
      cout << "Your block was unsuccessful. " << attack << " damage done.\n";


//         otherwise, subtract attack value from health.

      
      health -= attack;
      
      
      cout << "Player Health = " << health << "\n";
      
    }

    //         if block is greater or equal to attack, successful block
    
    if (block >= attack) {
      cout << "Your block was a success!\n";
    }

    cout << "\n";
  }

  // if health is greater than 0, congratulate player
  
if (health > 0) {
  cout << "You won! Now to overthrow the universe!";
}

  // otherwise, tell the player they're dead.
  
  if (health <= 0) {
    cout << "You died. Now you will never be ruler.\n";
  }



// keep looping while health is greater than zero and fewer than 4 turns have happened
}