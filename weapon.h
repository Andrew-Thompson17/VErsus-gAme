#include <iostream>
#include "item.h"

using namespace std;

class Weapon : public Item {
public:
  //getters
  int getDamage() { return damage; }
  int getAccuracy() { return accuracy; }

  //setters
  void setDamage(int dmg) { damage = dmg; }
  void setAccuracy(int acc) { accuracy = acc; }
private:
  int damage;
  int accuracy;
  int burn;
  int poison;
};