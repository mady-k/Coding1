// Coding 1 Week 14 Spring 2023
// Madalynn Winters - reading from and writing to files.

#include <fstream> // ifstream (reading) (in from a file) ofstream (writing) (out to a file)
#include <iostream>
using namespace std;

// global array
string faveGames[100];
int index = 0;

// for the assignment
//    create a favegames program
//    use functions for
//      add
//      show
//      remove
//      edit
//      load previous list from file
//      save list to file

void add() {

  cout << "What game would you like to add?\n";

  string input;

  cin >> input;

  cout << input << " has been added to your favorite games.\n";

  faveGames[index] = input;

  index += 1;
}

void show() {
  string input;

  cout << "Here are your favorite games:\n";

  for (int i = 0; i < index; i += 1) {
    cout << i + 1 << ". " << faveGames[i] << "\n";
  }
}

void remove() {

  for (int i = 0; i < index; i++) {
    if (faveGames[i] == " ") {
      continue;
    } else {
      cout << faveGames[i] << endl;
    }
  }
}

void edit() {

  cout << "What is the number of the game you want to change?\n";

  int numInput;

  cin >> numInput;

  cout << "What would you like to change " << faveGames[numInput - 1]
       << " to?\n";

  string input;

  cin >> input;

  faveGames[numInput - 1] = input;

  cout << input << " has been added to your favorite games list.\n";
}

void load() {
  cout << "Let's read from our save.txt file.\n";
  // create a string variable to hold each line in the file.
  string line;
  // create the file variable
  ifstream save("save.txt");

  // check to see if the file is open
  if (save.is_open()) {
    while (getline(save, line)) {
      cout << line << "\n";
      faveGames[index++] = line;
    }
  } else {
    cout << "file could not be loaded.\n";
  }
}

void save() {
  // open the file
  ofstream file;

  file.open("save.txt");

  // use a for loop to write all of the array lines to the file.

  for (int i = 0; i < index; i++) {
    file << faveGames[i] << "\n";
  }
  // file << favGames[i] << "\n";

  // close the file.
  file.close();
}

// void save() {
//   // open the file
//   ofstream file;

//   file.open("save.txt");

//   // use a for loop to write all of the array lines to the file

//   for(int i = 0; i < index; i++) {
//     string line;

//     file << faveGames[i] << endl;
//   }

//       // file << faveGames[i] << "\n";
//   // close the file

//   file.close();
// }

int main() {
  if (true) {
    while (true) {
      cout << "What would you like to do?\n";

      cout << "Type 'add' to add a game.\n";

      cout << "Type 'show' to show your favorite games.\n";

      cout << "Type 'remove' to remove an empty space from the list.\n";

      cout << "Type 'edit' to make a change to the list.\n";

      cout << "Type 'load' to load a file.\n";

      cout << "Type 'save' to save your list to a file.\n";

      string input;

      cin >> input;

      if (input == "add")
        add();

      if (input == "show")
        show();

      if (input == "edit")
        edit();

      if (input == "remove")
        remove();

      if (input == "load")
        load();

      if (input == "save")
        save();

    } // end of while (true)
  }   // end of if (true)
}