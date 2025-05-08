#include "MexicanJapaneseFusion.hpp"
#include <iostream>
using namespace std;

MexicanJapaneseFusion::MexicanJapaneseFusion(string nme, string addr, int spceLevel, bool tatamiAvailable) : MexicanRestaurant(nme, addr, spceLevel), JapaneseRestaurant(nme, addr, tatamiAvailable), Restaurant(nme, addr) {}

void MexicanJapaneseFusion::describeCuisine() {
  cout << "A unique fusion of Mexican and Japanese cuisines" << endl;
}

void MexicanJapaneseFusion::displaySpecialty() {
  cout << "Our specialties combine both cuisines - try our Sushi Tacos and Wasabi Guacamole!" << endl;
}
