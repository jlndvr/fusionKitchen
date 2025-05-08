#include "MenuItem.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

MenuItem::MenuItem(string n, double p) : name(n), price(p) {}

void MenuItem::display() const {
  cout << name << " - " << "$" << fixed << setprecision(2) << price << endl; 
}
