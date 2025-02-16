#include "./headers/gasMileage.hpp"

#include <iostream>

GasMileage::GasMileage() {
  this->totalGallons = 0;
  this->totalMiles = 0;
}

void GasMileage::setMiles() {
  int insertedMiles;
  std::cin >> insertedMiles;

  this->miles = insertedMiles;
}

void GasMileage::setGallons() {
  int insertedGallons;
  std::cin >> insertedGallons;

  this->gallons = insertedGallons;
}

void GasMileage::setTotalGallons(const double& totalGallons) { this->totalGallons = totalGallons; }

void GasMileage::setTotalMiles(const double& totalMiles) { this->totalMiles = totalMiles; }

const int& GasMileage::getMiles() const { return this->miles; }

const int& GasMileage::getGallons() const { return this->gallons; }

const double& GasMileage::getTotalGallons() const { return this->totalGallons; }

const double& GasMileage::getTotalMiles() const { return this->totalMiles; }