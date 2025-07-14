#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << "The first number is greater than the second number." << endl;
    } else if (num1 < num2) {
        cout << "The first number is less than the second number." << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;

    return 0;    
}