#include <iostream>
#include <limits>
using namespace std;

class Complex {
private:
    double realPart;
    double imaginaryPart;

public:
    Complex(double real = 0.0, double imaginary = 0.0)
        : realPart(real), imaginaryPart(imaginary) {}

    Complex operator+(const Complex& other) const {
        return Complex(realPart + other.realPart,
                       imaginaryPart + other.imaginaryPart);
    }

    Complex operator-(const Complex& other) const {
        return Complex(realPart - other.realPart,
                       imaginaryPart - other.imaginaryPart);
    }

    friend ostream& operator<<(ostream& output, const Complex& number) {
        output << number.realPart;
        if (number.imaginaryPart >= 0)
            output << " + " << number.imaginaryPart << "i";
        else
            output << " - " << -number.imaginaryPart << "i";
        return output;
    }
};

bool readNumber(const char* prompt, double& value) {
    cout << prompt;
    if (cin >> value) return true;

    cout << "Invalid input. Please enter a numeric value.\n";
    return false;
}

int main() {
    cout << "====================================\n";
    cout << "       COMPLEX NUMBER CALCULATOR\n";
    cout << "====================================\n";

    double real1, imag1, real2, imag2;
    if (!readNumber("Enter real part of first number: ", real1) ||
        !readNumber("Enter imaginary part of first number: ", imag1) ||
        !readNumber("Enter real part of second number: ", real2) ||
        !readNumber("Enter imaginary part of second number: ", imag2)) {
        return 1;
    }

    Complex first(real1, imag1);
    Complex second(real2, imag2);

    cout << "\nFirst complex number  : " << first << '\n';
    cout << "Second complex number : " << second << '\n';
    cout << "Addition              : " << (first + second) << '\n';
    cout << "Subtraction           : " << (first - second) << '\n';

    cout << "\nThank you for using the calculator!\n";
    return 0;
}
