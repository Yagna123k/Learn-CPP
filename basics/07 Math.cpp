#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << max(10, 20) << endl; // Maximum of two numbers
    cout << min(10, 20) << endl; // Minimum of two numbers

    cout << sqrt(64) << endl;
    cout << cbrt(27) << endl; // Cube root of 27
    cout << round(3.14) << endl; // Rounding to nearest integer

    cout << pow(2, 3) << endl; // 2 raised to the power of 3
    cout << abs(-10) << endl; // Absolute value
    
    cout << ceil(3.14) << endl; // Round up to nearest integer
    cout << floor(3.14) << endl; // Round down to nearest integer
    cout << fmod(5, 2) << endl; // Remainder of division

    return 0;
}