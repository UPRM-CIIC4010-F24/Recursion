#include <iostream>
#include <string>
using namespace std;



bool isPalindromeAux(const string& str, int start, int end) {
    // Kayyak
    if(start >= end) 
        return true;
    if(str[start] != str[end])
        return false;
    else {
        return isPalindromeAux(str, start + 1, end -1);
    }
}

bool isPalindrome(const string& str) {
    return isPalindromeAux(str, 0, str.length() - 1);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isPalindromeAux(input, 0, input.length() - 1)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}