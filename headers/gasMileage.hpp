#ifndef GAS_MILEAGE
#define GAS_MILEAGE 1

class GasMileage {
 private:
  int miles;
  int gallons;
  double totalMiles;
  double totalGallons;

 public:
  GasMileage();
  void setMiles();
  void setGallons();
  void setTotalMiles(const double&);
  void setTotalGallons(const double&);
  const int& getMiles() const;
  const int& getGallons() const;
  const double& getTotalMiles() const;
  const double& getTotalGallons() const;
};

#endif