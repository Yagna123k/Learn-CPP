#include <iostream>
using namespace std;


int sum(int k) {
    if (k <= 0) {
        return 0;
    }

    return k + sum(k - 1);
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int result = sum(10);
    cout << result << endl;
    cout << "Factorial of 5 is " << factorial(5);
    return 0;
}