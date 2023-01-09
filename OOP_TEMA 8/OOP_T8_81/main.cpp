#include <iostream>
#include <cmath>
using namespace std;
class ComplexNumber {
 public:
  ComplexNumber(double realNumber, double imagNumber) : realNumber_(realNumber), imagNumber_(imagNumber) {}

  double getReal() const { return realNumber_; }
  double getImag() const { return imagNumber_; }
  double getModule() const { return sqrt(realNumber_ * realNumber_ + imagNumber_ * imagNumber_); }

  static const ComplexNumber& getClosestToOrigin(const ComplexNumber& a, const ComplexNumber& b) {
    if (a.getModule() < b.getModule()) {
      return a;
    } else {
      return b;
    }
  }

 private:
  double realNumber_;
  double imagNumber_;
};

