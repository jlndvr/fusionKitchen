#include "Restaurant.hpp"
#include "MenuItem.hpp"
#include <iostream>
#include <iterator>
using namespace std;

Restaurant::Restaurant(string n, string addr) : name(n), address(addr) {}

void Restaurant::displayInfo() {
  cout << "Name: " << name << " Address: " << address << endl;
}
void Restaurant::describeCuisine() {
  cout << "This restaurant serves various types of cuisines." << endl;
}
void Restaurant::addMenuItem(MenuItem item) {
  items.push_back(item);
}

// INTERESTING
void Restaurant::displayMenu() {
  cout <<"-" << name << " Menu-" << endl;
  for (const auto &_item : items) {
  _item.display();
  }
}
