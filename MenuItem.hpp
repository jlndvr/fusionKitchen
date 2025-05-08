#ifndef MENU_ITEM_HPP
#define MENU_ITEM_HPP

#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class MenuItem {
 private:
 string name;
 double price;

 public:
 MenuItem(string n, double p);
 void display() const;
 
};

#endif
