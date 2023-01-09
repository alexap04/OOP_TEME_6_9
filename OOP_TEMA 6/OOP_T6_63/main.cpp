#include <iostream>
#include <cmath>
using namespace std;
class ComplexNumber {
 public:
  ComplexNumber(double realNumber, double imaginaryNumber) : real(realNumber), imag(imaginaryNumber) {}

  double realNumber() const { return real; }
  double imaginaryNumber() const { return imag; }
  double magnitude() const { return sqrt(real * real + imag * imag); }

  bool operator<(const ComplexNumber& other) const {
    return magnitude() < other.magnitude();
  }

 private:
  double real;
  double imag;
};

int main() {
  ComplexNumber nr1(25, 5);
  ComplexNumber nr2(6, 1);

  if (nr1 < nr2) {
    cout << "nr1 is smaller" <<'\n';
  } else {
    cout << "nr2 is smaller" <<'\n';
  }

  return 0;
}
