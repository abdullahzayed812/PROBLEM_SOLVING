#include "../headers/gasMileage.hpp"

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

void GasMileage::test() {
  while (true) {
    std::cout << "Enter mile driven (-1 to exist): ";

    std::cin >> this->miles;
    if (miles == -1) {
      break;
    }

    std::cout << "Enter gallons used: ";
    std::cin >> this->gallons;

    double mpg = static_cast<double>(this->miles) / this->gallons;
    std::cout << "MPG this trip: " << mpg << std::endl;

    this->totalGallons += this->gallons;
    this->totalMiles += this->miles;

    double totalMPG = static_cast<double>(this->totalMiles) / this->totalGallons;

    std::cout << "Total MPG: " << totalMPG << std::endl;
  }
}