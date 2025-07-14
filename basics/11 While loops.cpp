#include <iostream>
using namespace std;

int main(){

    int countdown = 5;

    while (countdown > 0){
        cout << "Countdown: " << countdown << endl;
        countdown--;
    }
    cout << "Happy Birthday!" << endl;

    int i = 10;
    do {
    cout << "i is " << i << "\n";
    i++;
    } while (i < 5);

    int number;
    do {
    cout << "Enter a positive number: ";
    cin >> number;
    } while (number > 0);
    cout << "You entered a non-positive number: " << number << endl;

    int numbers;
    cout << "Enter a number to reverse: ";
    cin >> numbers;

    int revNumbers = 0;

    while (numbers) {
    revNumbers = revNumbers * 10 + numbers % 10;
    numbers /= 10;
    }

    cout << "Reversed numbers: " << revNumbers << "\n";
}