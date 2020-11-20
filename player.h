#include <iostream>
#include <vector>
#include "weapon.h"
#include "enemy.h"
using namespace std;

class Player : public Entity {
public:

  // getters
  string getName() { return name; }
  int getHealth() { return health; }

  // setters
  void setName(string setName) { name = setName; }
  void setHealth(int setHealth) { health = setHealth; }

  // attack
  void attackEnemy(Enemy enemy);
private:
  Weapon heldWeapon;
  vector<Item> inventory;
};