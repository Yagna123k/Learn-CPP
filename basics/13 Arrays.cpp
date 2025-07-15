#include <iostream>
#include <vector>
using namespace std;

int main(){
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    
    string cars1[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++) {
        cout << i << " = " << cars1[i] << "\n";
    }

    for(string car: cars1){
        cout << car << endl;
    }

    string cars2[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars2[0] = "Opel";
    cout << cars2[0];

    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbers);

    int myNumbers2[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < sizeof(myNumbers2) / sizeof(myNumbers2[0]); i++) {
        cout << myNumbers2[i] << "\n";
    }

    vector<string> cars3 = {"Volvo", "BMW", "Ford"};
    cars3.push_back("Tesla");

    //Multidimensional Arrays
    int myNumbers3[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << myNumbers3[i][j] << " ";
        }
        cout << "\n";
    }

    string letters[2][2][2] = {
        {
            { "A", "B" },
            { "C", "D" }
        },
        {
            { "E", "F" },
            { "G", "H" }
        }
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
            cout << letters[i][j][k];
            }
            cout << "\n";
        }
    }

    return 0;
}