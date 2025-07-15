#include <iostream>
using namespace std;

int main(){
    string food = "Pizza";
    string &meal = food; // meal is a reference to food

    cout << food << "\n";
    cout << meal << "\n";
    cout << &food;

    return 0;
}