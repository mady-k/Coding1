#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>

string flowerNames [] = {"Sunflower", "Lily of the Valley", "Gladiolus", "Rose", "Cactus", "Tulip"};

class flower{
public:

string name;
int HP;
int height;

flower(string givenName = "Sunflower", int givenHP = 10, int givenHeight = 10) {
  // cout << "You found a new flower in your garden!\n";
  if(givenName == "Sunflower") {
    name = flowerNames[rand () % 6];
  }
  name = givenName;
  HP = givenHP;
  height = givenHeight;
  

  
}

void status() {
  cout << name << ": " << HP << " HP.\n";
}

void measure() {
  cout << name << " is " << height << " centimeters tall.\n";
}

};


int main() {
  srand(time(0));

  flower flowers[5];

  for(int i = 0; i < 5; i++) {
    flowers[i] = flower(flowerNames[rand() % 5], rand() % 5 + 1);
  }

  flower sunflower ("Sunflower", 3, 15);
  sunflower.status();
  sunflower.measure();

  flower lily ("Lily of the Valley", 5, 30);
  lily.status();
  lily.measure();

  flower glad ("Gladiolus", 9, 25);
  glad.status();
  glad.measure();

  flower rose ("Rose", 9, 35);
  rose.status();
  rose.measure();

  flower cactus ("Cactus", 7, 10);
  cactus.status();
  cactus.measure();

  flower tulip ("Tulip", 6, 20);
  tulip.status();
  tulip.measure();

  for(int i = 0; i < 5; i++) {
    flowers[i].status();
    flowers[i].measure();
  }
  }