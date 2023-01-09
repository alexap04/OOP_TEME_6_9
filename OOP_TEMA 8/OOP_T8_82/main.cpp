#include <cmath>
#include <iostream>
using namespace std;
template <typename T>
class ComplexNumber {
 public:
  ComplexNumber(T realNumber, T imagNumber) : realNumber_(realNumber), imagNumber_(imagNumber) {}

  T getReal() const { return realNumber_; }
  T getImag() const { return imagNumber_; }
  T getModule() const { return sqrt(realNumber_ * realNumber_ + imagNumber_ * imagNumber_); }

  template <typename U>
  bool operator<(const U& other) const {
    return getModule() < other;
  }

  template <typename U>
  bool operator>(const U& other) const {
    return getModule() > other;
  }

  template <typename U>
  bool operator==(const U& other) const {
    return getModule() == other;
  }

 private:
  T realNumber_;
  T imagNumber_;
};

int main() {
  ComplexNumber<float> a(2, 10);
  ComplexNumber<int> b(3, 5);
  float c = 7.0;
  if (a > c) {
    cout << "a > c" <<endl;
  } else {
    cout << "a <= c" <<endl;
  }
  if (b < c) {
    cout << "b < c" <<endl;
  } else {
    cout << "b >= c" <<endl;
  }
  return 0;
}
