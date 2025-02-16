#ifndef ROMAN_TYPE
#define ROMAN_TYPE 1

#include <map>
#include <string>

class RomanType {
 private:
  std::string romanString;
  int decimalValue;
  void convertToDecimal();

 public:
  RomanType(std::string);
  RomanType();
  void printRoman() const;
  void printDecimal() const;
  void test() const;
};

#endif