#include <iostream>
using namespace std;


int plusFunc(int x, int y) {
  return x + y;
}

int plusFunc(int x, int y, int z) {
  return x + y + z;
}

double plusFunc(double x, double y){
    return x+y;
}
int main() {
  int result1 = plusFunc(3, 7);
  int result2 = plusFunc(1, 2, 3);
  double result3 = plusFunc(2.13, 0.5);

  cout << "Sum of 2 numbers: " << result1 << "\n";
  cout << "Sum of 3 numbers: " << result2 << "\n";
  cout << "Sum of 2 decimal numbers: " << result3 << "\n";
  return 0;
}