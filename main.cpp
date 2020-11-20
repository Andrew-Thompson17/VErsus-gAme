/**
 *   @file: VErsus-gAme.cpp
 * @author: Andrew Thompson & Vishnu & Eric
 *   @date: 11/13/20
 *  @brief: 
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include "game.h"
#include "player.h"

using namespace std;

int main(){
##THIS IS  BRANCH TEST.
  srand(time(NULL));
  string personName;

  cout << "Enter your name: ";
  cin >> personName;
  Player newPlayer(personName);
  Game newGame(newPlayer);
                
  return 0;
}