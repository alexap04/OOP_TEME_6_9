#include <cmath>
#include <iostream>

class Complex {
public:
    Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}

    double real;
    double imaginary;
};

std::ostream& operator<<(std::ostream& out, const Complex& c) {
    out << c.real << " + " << c.imaginary << "i";
    return out;
}

double operator~(const Complex& c) {
    return std::sqrt(c.real*c.real + c.imaginary*c.imaginary);
}

Complex operator^(const Complex& c, int power) {
    if (power == 2) {
        return Complex(c.real*c.real - c.imaginary*c.imaginary, 2*c.real*c.imaginary);
    } else {
        throw std::invalid_argument("Power higher than 2 is not implemented");
    }
}

Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
}

int main() {
    Complex c1(1, 2);
    Complex c2(3, 5);

    std::cout << "Absolute value: " << ~c1 << std::endl;
    std::cout << "Squared: " << (c1 ^ 2) << std::endl;
    std::cout << "Sum: " << (c1 + c2) << std::endl;

    return 0;
}
