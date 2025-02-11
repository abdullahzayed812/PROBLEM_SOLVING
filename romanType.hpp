#include <map>
#include <string>

class RomanType {
 private:
  std::string romanString;
  int decimalValue;
  void convertToDecimal();

 public:
  RomanType(std::string);
  void printRoman() const;
  void printDecimal() const;
};
