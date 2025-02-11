#include "./romanType.hpp"

#include <iostream>
#include <map>
#include <string>

#include "romanType.hpp"

RomanType::RomanType(std::string str) {
  this->romanString = str;
  convertToDecimal();
}

void RomanType::convertToDecimal() {
  std::map<char, int> romanMap = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};
  this->decimalValue = 0;

  for (int i = 0; i < this->romanString.length(); ++i) {
    if (i + 1 < romanString.length() && romanMap[romanString[i]] < romanMap[romanString[i + 1]]) {
      this->decimalValue -= romanMap[romanString[i]];
    } else {
      this->decimalValue += romanMap[romanString[i]];
    }
  }
}

void RomanType::printRoman() const { std::cout << "The romans symbols is: " << this->romanString << "\n"; }

void RomanType::printDecimal() const { std::cout << "The romans decimal is: " << this->decimalValue << "\n"; }
