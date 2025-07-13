#include <iostream>
using namespace std;

int main(){
    string str1 = "Hello";
    string str2 = "World";
    string str3 = str1 + " " + str2; // Concatenation
    cout << "Concatenated String: " << str3 << endl;
    string str4 = str1.append(str2);
    cout << "Appended String: " << str4 << endl;
    
    return 0;
}