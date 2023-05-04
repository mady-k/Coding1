#include <iostream>
using namespace std;

int addTwoNums(int first, int second) {
  return first + second;
} // end of int

// global variables
string inventory[10];
int invSize = 0;       // use this to enter items in the next available spot. 

//show function
void show() {
  cout << "Your inventory:\n";

  for (int i = 0; i < invSize; i++) {
    cout << inventory[i] << "\n";
  } // end of for
} // end of void

//add function
void add() {
  cout << "What would you like to add?\n";
  string input; 
  cin >> input;

  inventory[invSize++] = input;
} // end of void

//edit function

void add(string array[]) {
  cout << "What game do you want to add?\n";
string input;
  cin >> input;

  array[3] = input;
} // end of void

void show(string array[]) {
  cout << "your fav games:\n";
  for(int i = 0; i < 4; i++) {
    cout << array[i] << "\n";
  } // end of for
} // end of void

int main() {

  add(); 
  add(); 
  add();
  show();

  while(true) {
    cout << "Do what?\n";
    string input;
    cin >> input;

    if(input == "add") add();
    if(input == "show") show();
    if(input == "quit") break;
  }

  // string favGames[4] = {"Mario", "Zelda", "Kirby"};

  // add(favGames);
  // show(favGames);
  // cout << "3 + 3 is " << addTwoNums(3,3) << ".\n";
} // end of int