#include <iostream>
using namespace std;

void greet(string name){
    cout << "Hi, " << name << endl;
}

void age(int age= 18){
    cout << "Your age is: " << age << endl;
}

void info(string fname, int age) {
  cout << fname << " is " << age << " years old. \n";
}

int add(int a, int b){
    return a+b;
}

void change(int &value){
    value = 5;
}

void printArray(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << " ";
  }
}

struct Car {
  string brand;
  int year;
};

void updateYear(Car& c) {
  c.year++;
}

float toCelsius(float fahrenheit) {
  return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main(){
    // Parameter
    greet("Yagna");
    greet("Vinay");

    // Default Parameter
    age(20);
    age();

    //multiple parameters
    info("Yagna", 20);
    info("Vinay", 21);

    // Return Values
    cout << add(5,10) << endl;
    int sum = add(12, 2);
    cout << sum << endl;

    // Pass by Reference
    int value = 10;
    cout << value << endl;
    change(value);
    cout << value << endl;

    //Passing an Array
    int myNumbers[5] = {10, 20, 30, 40, 50};
    printArray(myNumbers);

    //Passing struct and by reference
    Car myCar = {"Toyota", 2020};
    updateYear(myCar);
    cout << "The " << myCar.brand << " is now from year " << myCar.year << ".\n";

    float f_value = 98.8;
    float result = toCelsius(f_value);
    cout << "Fahrenheit: " << f_value << "\n";
    cout << "Convert Fahrenheit to Celsius: " << result << "\n";
    
    return 0;
}