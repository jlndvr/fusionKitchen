#ifndef MEXICAN_JAPANESE_FUSION_HPP
#define MEXICAN_JAPANESE_FUSION_HPP

#include "MexicanRestaurant.hpp"
#include "JapaneseRestaurant.hpp"
#include "Restaurant.hpp"

class MexicanJapaneseFusion : public MexicanRestaurant, public JapaneseRestaurant {
  public:
  MexicanJapaneseFusion(string nme, string addr, int spceLevel, bool tatamiAvailable);
  void describeCuisine();
  void displaySpecialty();
};

#endif
