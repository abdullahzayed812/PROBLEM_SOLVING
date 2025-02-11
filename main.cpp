#include <iostream>
#include <map>

#include "./romanType.hpp"

int main() {
  std::string roman1 = "MCXIV";
  std::string roman2 = "CCCLIX";
  std::string roman3 = "MDCLXVI";

  RomanType num1(roman1);
  RomanType num2(roman2);
  RomanType num3(roman3);

  std::cout << "Test 1:" << std::endl;
  num1.printRoman();
  num1.printDecimal();
  std::cout << std::endl;

  std::cout << "Test 2:" << std::endl;
  num2.printRoman();
  num2.printDecimal();
  std::cout << std::endl;

  std::cout << "Test 3:" << std::endl;
  num3.printRoman();
  num3.printDecimal();
  std::cout << std::endl;

  return 0;
}