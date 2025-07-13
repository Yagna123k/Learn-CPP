#include <iostream>
using namespace std;

int main(){
    string str1 = "Hello";
    string str2 = "World";
    string str3 = str1 + " " + str2; // Concatenation
    cout << "Concatenated String: " << str3 << endl;
    string str4 = str1.append(str2);
    cout << "Appended String: " << str4 << endl;

    string x = "10";
    string y = "20";
    string z = x + y;

    cout << z << endl;

    string text = "Hello, World!";
    cout << "Length of text: " << text.length() << endl; // Length of string
    cout << "Length of text using size(): " << text.size() << endl; // Size of string

    cout << "Character at index 0: " << text[0] << endl; // Accessing character at index
    cout << "Character at index 7: " << text.at(7) << endl; // Accessing character using at()
    cout << "Substring from index 7: " << text.substr(7) << endl; // Substring from index
    cout << "Substring from index 0 to 4: " << text.substr(0, 5) << endl; // Substring with length
    cout << "Find 'World' in text: " << text.find("World") << endl; // Find substring
    cout << "Find 'World' in text using find_first_of: " << text.find_first_of("World") << endl; // Find first occurrence of characters
    cout << "Find 'World' in text using find_last_of: " << text.find_last_of("World") << endl; // Find last occurrence of characters
    cout << "Replace 'World' with 'C++': " << text.replace(text.find("World"), 5, "C++") << endl; // Replace substring
    cout << "Erase 'World' from text: " << text.erase(text.find("World"), 5) << endl; // Erase substring
    cout << "Insert 'Beautiful ' at index 7: " << text.insert(7, "Beautiful ") << endl; // Insert substring
    cout << "String to integer conversion: " << stoi(x) + stoi(y) << endl; // Convert string to integer
    cout << "Integer to string conversion: " << to_string(30) << endl; // Convert integer to string
    
    // escape sequences
    cout << "New line escape sequence: \nThis is a new line." << endl; // New line
    cout << "Tab escape sequence: \tThis is a tab space." << endl; // Tab space
    cout << "Backslash escape sequence: This is a backslash (\\)." << endl; // Backslash
    cout << "Double quote escape sequence: This is a double quote (\")." << endl; // Double quote
    cout << "Single quote escape sequence: This is a single quote (\')." << endl; // Single quote
    cout << "Carriage return escape sequence: This is a carriage return.\r" << endl; // Carriage return
    cout << "Backspace escape sequence: This is a backspace\b." << endl; // Backspace
    cout << "Form feed escape sequence: This is a form feed\f." << endl; // Form feed
    cout << "Vertical tab escape sequence: This is a vertical tab\v." << endl; // Vertical tab
    cout << "Hexadecimal escape sequence: \x48\x65\x6C\x6C\x6F" << endl; // Hexadecimal characters
    cout << "Octal escape sequence: \101\102\103" << endl; // Octal characters
    cout << "Raw string literal: R\"raw_string(This is a raw string)raw_string\"" << endl; // Raw string literal

    //user input
    string userInput;
    cout << "Enter a string: ";
    getline(cin, userInput);
    cout << "You entered: " << userInput << endl;

    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    //C-Style Strings
    char cStyleStr[] = "This is a C-Style String";
    cout << "C-Style String: " << cStyleStr << endl;

    return 0;
}