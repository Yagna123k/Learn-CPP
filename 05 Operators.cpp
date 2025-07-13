#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 10;

    //Arithmetic Operators

    int c = a + b; // Addition operator
    cout << "Addition: " << c << endl;
    c = a - b; // Subtraction operator
    cout << "Subtraction: " << c << endl;
    c = a * b; // Multiplication operator
    cout << "Multiplication: " << c << endl;
    c = b / a; // Division operator
    cout << "Division: " << c << endl;
    c = b % a; // Modulus operator
    cout << "Modulus: " << c << endl;
    c = a++; // Post-increment operator
    cout << "Post-increment: " << c << ", a: " << a << endl;
    c = ++b; // Pre-increment operator
    cout << "Pre-increment: " << c << ", b: " << b << endl;
    c = a--; // Post-decrement operator
    cout << "Post-decrement: " << c << ", a: " << a << endl;
    c = --b; // Pre-decrement operator
    cout << "Pre-decrement: " << c << ", b: " << b << endl;

    // Assignment Operators
    c = a; // Assignment operator
    cout << "Assignment: " << c << endl;
    c += b; // Add and assign operator
    cout << "Add and assign: " << c << endl;
    c -= a; // Subtract and assign operator
    cout << "Subtract and assign: " << c << endl;
    c *= b; // Multiply and assign operator
    cout << "Multiply and assign: " << c << endl;
    c /= a; // Divide and assign operator
    cout << "Divide and assign: " << c << endl;
    c %= b; // Modulus and assign operator
    cout << "Modulus and assign: " << c << endl;
    c &= a; // Bitwise AND and assign operator
    cout << "Bitwise AND and assign: " << c << endl;
    c |= b; // Bitwise OR and assign operator
    cout << "Bitwise OR and assign: " << c << endl;
    c ^= a; // Bitwise XOR and assign operator
    cout << "Bitwise XOR and assign: " << c << endl;
    c <<= 1; // Left shift and assign operator
    cout << "Left shift and assign: " << c << endl;
    c >>= 1; // Right shift and assign operator
    cout << "Right shift and assign: " << c << endl;

    //Comparison Operators
    cout << "Equal to: " << (a == b) << endl; // Equal to operator
    cout << "Not equal to: " << (a != b) << endl; // Not equal to operator
    cout << "Greater than: " << (a > b) << endl; // Greater than operator
    cout << "Less than: " << (a < b) << endl; // Less than operator
    cout << "Greater than or equal to: " << (a >= b) << endl; // Greater than or equal to operator
    cout << "Less than or equal to: " << (a <= b) << endl; // Less than or equal to operator
    //Logical Operators
    cout << "Logical AND: " << (a > 0 && b > 0) << endl; // Logical AND operator
    cout << "Logical OR: " << (a > 0 || b < 0) << endl; // Logical OR operator
    cout << "Logical NOT: " << !(a > 0) << endl; // Logical NOT operator
}