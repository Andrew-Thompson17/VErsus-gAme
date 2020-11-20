#include <iostream>

using namespace std;

class Item{
public:
  string getName() { return name; }
  void setName(string setName) { name = setName; }
private:
  string name;
};