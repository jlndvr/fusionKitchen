#include <iostream>
#include "MexicanRestaurant.hpp"
#include "JapaneseRestaurant.hpp"
#include "MexicanJapaneseFusion.hpp"

using namespace std;

int main() {
    cout << "-Testing Restaurant Inheritance Hierarchy-" << endl;

    MexicanRestaurant elSombrero("El Sombrero", "1234 UYATTL", 3);
    elSombrero.displayInfo();
    elSombrero.describeCuisine();

    JapaneseRestaurant fjksdh("FJKSDH", "5678 Bi KI", true);
    fjksdh.displayInfo();
    fjksdh.describeCuisine();

    MexicanJapaneseFusion wimdoTaco("Wimdo Taco", "91011 WWEST", 4, false);
    wimdoTaco.displaySpecialty();

    MenuItem enchiladas("Enchiladas", 12.9);
    elSombrero.addMenuItem(enchiladas);

    MenuItem sushiRoll("Sushi Roll", 14.99);
    fjksdh.addMenuItem(sushiRoll);

    MenuItem ramen("Ramen", 11.99);
    fjksdh.addMenuItem(ramen);

    MenuItem sushiTacos("Sushi Tacos", 15.99);
    wimdoTaco.addMenuItem(sushiTacos);

    MenuItem wasabiGuac("Wasabi Guacamole", 7.99);
    wimdoTaco.addMenuItem(wasabiGuac);
    
    elSombrero.displayMenu();
    fjksdh.displayMenu();
    wimdoTaco.displayMenu();

    return 0;

}
