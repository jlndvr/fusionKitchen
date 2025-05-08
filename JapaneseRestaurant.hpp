#ifndef JAPANESE_RESTAURANT_HPP
#define JAPANESE_RESTAURANT_HPP

#include "Restaurant.hpp"
using namespace std;

class JapaneseRestaurant : virtual public Restaurant {
  private:
  bool hasTatami;

  public:
  JapaneseRestaurant(string name, string addr, bool tatamiAvailable);
  void describeCuisine();
};

#endif
