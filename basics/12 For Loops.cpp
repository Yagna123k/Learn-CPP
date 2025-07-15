#include <iostream>
using namespace std;

int main(){

    for(int i=0; i<5; i++){
        cout << i << endl;
    }

    int sum = 0;
    for (int i = 1; i <= 5; i++) {
    sum = sum + i;
    }
    cout << "Sum is " << sum;

    // Nested loops

    for (int i = 1; i <= 2; ++i) {
        cout << "Outer: " << i << "\n"; // Executes 2 times

        // Inner loop
        for (int j = 1; j <= 3; ++j) {
            cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
        }
    }

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << i * j << " ";
        }
        cout << "\n";
    }

    // ForEach Loop
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
        cout << i << "\n";
    }

    string word = "Hello";
    for (char c : word) {
        cout << c << "\n";
    }  

    // Break and Continue
    
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << "\n";
    }

    for (int i = 0; i < 6; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << "\n";
    }
    return 0;
}