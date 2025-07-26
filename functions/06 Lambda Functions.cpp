#include <iostream>
#include <functional>
using namespace std;


void myFunction(function<void()> func) {
  func();
  func();
}


int main(){
    auto add = [](int a, int b){
        return a+b;
    };

    cout << add(2,4) << endl;

    auto message = []() {
        cout << "Hello World!\n";
    };

    myFunction(message);

    int x = 10;

    auto show = [&x]() {
        cout << x;
    };

    x = 20;  // Change x after the lambda is created

    show();

    return 0;
}