#include <iostream>
#include <cstdlib>
#include <ctime> // Enables use of time() function
using namespace std;

// csc 134
// m3lab3 - craps (version 1)
// Gonzalez
// 2/15/23

/*
  This program simulates a single game of craps.
  First version (MVP) is a single roll.

*/

int main() {
// variables
  int die1, die2, roll; // roll is 2d6
  int seed;             // will use time(0) later
  // char any_key;      // for cin.get()
  bool winner = false;
  cout << "Welcome to the craps table! \n";

  // For testing, we'll use a repeatable seed
  cout << "What's your lucky number? ";
  cin >> seed;
  srand(seed);

  // start game
  cout << "Let's roll! (press ENTER)" << endl; // TODO: 'Press any key'
  die1 = (rand() % 6) + 1;                     // from 1 to 6
  die2 = (rand() % 6) + 1;
  roll = die1 + die2;

  cout << "You rolled: (" << die1 << " + " << die2 << ") -> ";
  cout << roll << endl;

  // determine outcome!
  switch (roll) {
    // instant losses
    case2:
    cout << "Snake eyes!" << endl;
    winner = false;
    break;
    case 12:
    cout << "Boxcars!" << endl;
    winner = false;
    break;

    // instant wins
    case 7:
    cout << "You win!" << endl;
    winner = true;
    break;
    // TODO: add 11
    
    // to be continued (point rolls)
    default:
    cout << "Unknown - TODO" << endl;
    break;

  }
  if (winner) {
    cout << "You won!" << endl;
  } else {
    cout << "Sorry -- you didn't win" << endl;
  }
  // all done 
  cout << "Thank you for playing!" << endl;
  return 0;
}