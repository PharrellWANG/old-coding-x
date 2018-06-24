//
// Created by WANG Zhenxiang Pharrell on 24/6/2018.
//
// Now you want a program that counts the spaces in
// the input as well as the total number of characters.
// You can use ``cin.get(char)`` in a while loop to read
// the characters and then use an if statement to identify
// and count the space characters.
//
// Listing 6.1
// in C++ Primer Plus 6th Edition Eng

#include <iostream>

int main(){
    using std::cin;  // using declarations
    using std::cout;
    using std::endl;
    char ch;

    int spaces = 0;
    int total = 0;

    cin.get(ch);
    while (ch != '.') { // quit at the end of sentence
        if (ch == ' ')
            ++ spaces; // check if ch is a space
        ++ total;  // done every time
        cin.get(ch);
    }
    cout << spaces << " spaces, " << total;
    cout << " characters total in sentence\n";
    return 0;
}

// Note that the total count includes the newline character
// that is generated by pressing Enter.