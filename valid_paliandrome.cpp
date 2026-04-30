#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {

        // skip non-alphanumeric characters
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;

        // compare after converting to lowercase
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string s;

    cout << "Enter string: ";
    getline(cin, s);   // important for spaces

    if (isPalindrome(s)) {
        cout << "True (Palindrome)";
    } else {
        cout << "False (Not Palindrome)";
    }

    return 0;
}