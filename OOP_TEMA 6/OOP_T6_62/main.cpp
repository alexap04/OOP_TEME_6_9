#include <iostream>
using namespace std;
class ComplexNumber {
 public:
  ComplexNumber(double realNumber, double imaginaryNumber) : real(realNumber), imag(imaginaryNumber) {}

  double realNumber() const { return real; }
  double imaginaryNumber() const { return imag; }

  ComplexNumber operator+(const ComplexNumber& other) const {
    return ComplexNumber(real + other.real, imag + other.imag);
  }

 private:
  double real;
  double imag;
};

int main() {
  ComplexNumber nr1(12, 3);
  ComplexNumber nr2(4, 8);
  ComplexNumber nr3 = nr1 + nr2;

  cout << nr3.realNumber() << " " << nr3.imaginaryNumber() <<'\n';

  return 0;
}
