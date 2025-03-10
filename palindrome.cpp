#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string s, clean;
    cout << "Enter a string: ";
    getline(cin, s);


    for (char c : s) {
        if (isalnum(c)) 
            clean += tolower(c);
    }


    string rev = string(clean.rbegin(), clean.rend());
    
    if (clean == rev)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}


