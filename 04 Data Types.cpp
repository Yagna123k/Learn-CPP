#include <iostream>
using namespace std;

int main(){
    //Scientific Numbers
    float sciNum = 1.23e4; // 1.23 * 10^4
    double d1 = 12E4;
    cout << sciNum << endl;
    cout << d1 << endl;

    //Boolean
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << endl;
    cout << isFishTasty << endl;

    //Character - Ascii Values
    char a = 65, b = 66, c = 67;
    cout << a;
    cout << b;
    cout << c << endl;

    //String
    string greeting = "Hello";
    cout << greeting << endl;

    auto x = 5; // x is automatically treated as int
    cout << x;

}