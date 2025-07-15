#include <iostream>
using namespace std;

struct car {
  string brand;
  string model;
  int year;
};

int main(){
    struct person{
        string name;
        int age;
    } john;

    john.name = "John";
    john.age = 30;

    cout << "Name: " << john.name << ", Age: " << john.age << endl;


    struct {
    string brand;
    string model;
    int year;
    } myCar1, myCar2; // We can add variables by separating them with a comma here

    // Put data into the first structure
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    // Put data into the second structure
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    // Print the structure members
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    car myCar3;
    myCar3.brand = "BMW";
    myCar3.model = "X5";
    myCar3.year = 1999;

    // Create another car structure and store it in myCar4;
    car myCar4;
    myCar4.brand = "Ford";
    myCar4.model = "Mustang";
    myCar4.year = 1969;

    // Print the structure members
    cout << myCar3.brand << " " << myCar3.model << " " << myCar3.year << "\n";
    cout << myCar4.brand << " " << myCar4.model << " " << myCar4.year << "\n";

    return 0;
}