#include <iostream>
#include "game.h"
using namespace std;

Game::Game(Player p){
  player = p;
}

/*
void Game::attackMethod(int &bearHealth)
{ 
  int r = rand() % 3;
  if (r > 0){
    bearHealth -= 50;
    if (bearHealth < 0){
      cout << 0 << "Bear is dead" << endl;
    }
    else 
    {
      cout << "You dealt 50 damage!" << endl;
    }
  }
  else{
    if (bearHealth < 0){
      cout << "Bear is dead" << endl;
    }
    else{    
      cout << "You missed!" << endl;
    }
  }
}

void Game::displayMethod()
{
  char ans;
  while(ans != '2'){
    cout << "Enter 1 to attack, 2 to exit: ";
    cin >> ans;
    if(ans == '1'){
      
      attackMethod(bearHealth);
      
      if (bearHealth <= 0){
        cout << "The bear is dead" << endl;
        return;
      }
      cout  << "The bear's health is: " << bearHealth << endl;
      cout  << "You took " << player.subtractHealth() << " damage" << endl;

      if (player.getHealth() <= 0){
        cout << player.getName() << " died, game over dumbass" << endl;
        
        return;
      }
      cout  << "The player's health is: " << player.getHealth() << endl;
      if (player.getHealth() <= 50 && player.getHealth() > 40){
        cout << "Hang in there " << player.getName() << "!" << endl;
      }
      else if (player.getHealth() <= 20 && player.getHealth() > 0){
        cout << "Keep fighting on " << player.getName() << "!" << endl;
      }
    }
  }
  
  exit(1);
}  
*/