#include <iostream>

using namespace std;

class Item{
public:
	Item();
	string getName() { return name; }
	void setName(string setName) { name = setName; }
private:
	string name;
};