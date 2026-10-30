# Project Report: Complex Number Calculator

## 1. Aim
To develop a C++ program that performs addition and subtraction of two complex numbers using operator overloading.

## 2. Introduction
A complex number contains a real part and an imaginary part. It is commonly written as `a + bi`, where `a` is the real part, `b` is the imaginary part, and `i` represents the imaginary unit.

## 3. OOPS Concepts Used
- **Class and object:** The `Complex` class represents a complex number, and objects store the two input numbers.
- **Encapsulation:** The real and imaginary parts are private data members.
- **Constructor:** The constructor initializes both parts of a complex number.
- **Operator overloading:** `+` adds two complex numbers, `-` subtracts them, and `<<` displays a complex number.

## 4. Working
The program accepts the real and imaginary parts of two complex numbers. It creates two `Complex` objects, applies the overloaded addition and subtraction operators, and displays both results.

For `(a + bi)` and `(c + di)`:
- Addition: `(a + c) + (b + d)i`
- Subtraction: `(a - c) + (b - d)i`

## 5. Algorithm
1. Start the program.
2. Read the real and imaginary parts of the first complex number.
3. Read the real and imaginary parts of the second complex number.
4. Create two objects of the `Complex` class.
5. Add the objects using the overloaded `+` operator.
6. Subtract the second object from the first using the overloaded `-` operator.
7. Display both results using the overloaded `<<` operator.
8. End the program.

## 6. Conclusion
The Complex Number Calculator performs addition and subtraction successfully. It demonstrates classes, objects, encapsulation, constructors, and operator overloading in C++.
