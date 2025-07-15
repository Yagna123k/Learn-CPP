#include <iostream>
using namespace std;

int main(){
    int myInt;
  float myFloat;
  double myDouble;
  char myChar;

  cout << sizeof(myInt) << "\n";
  cout << sizeof(myFloat) << "\n";
  cout << sizeof(myDouble) << "\n";
  cout << sizeof(myChar) << "\n";

  int numGuests;
  cout << "How many guests? ";
  cin >> numGuests;

  // Check for invalid input
  if (numGuests <= 0) {
    cout << "Number of guests must be at least 1.\n";
    return 0;
  }

  // Create memory space for x guests (an array of strings)
  string* guests = new string[numGuests];

  // Enter guest names
  for (int i = 0; i < numGuests; i++) {
    cout << "Enter name for guest " << (i + 1) << ": ";
    cin >> guests[i];
  }

  // Show all guests
  cout << "\nGuests checked in:\n";
  for (int i = 0; i < numGuests; i++) {
    cout << guests[i] << "\n";
  }

  delete[] guests; // Clean up memory
  
  return 0;
}