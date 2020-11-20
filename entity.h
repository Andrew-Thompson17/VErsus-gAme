#include <iostream>
using namespace std;

class Entity {
public:
	Entity() : name("Entity"), health(100), strength(1.0) {}
	Entity(string initName) : name(initName), health(100), strength(1.0) {}

	string getName() { return name; }
	int getHealth() { return health; }
	float getStrength() { return strength; }

	void setName(string setName) { name = setName; }
	void setHealth(int setHealth) { health = setHealth; }
	void setStrength(float setStrength) { strength = setStrength; }
protected:
	string name;
	int health;
	float strength;
};