#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    if(strlen(str1) != strlen(str2)) {
        cout << "Not Anagrams";
        return 0;
    }

    for(int i = 0; str1[i] != '\0'; i++) {
        for(int j = 0; str2[j] != '\0'; j++) {
            if(str1[i] == str2[j]) {
                str2[j] = '*';
                break;
            }
        }
    }

    bool anagram = true;

    for(int i = 0; str2[i] != '\0'; i++) {
        if(str2[i] != '*') {
            anagram = false;
            break;
        }
    }

    if(anagram)
        cout << "Strings are Anagrams";
    else
        cout << "Strings are Not Anagrams";

    return 0;
}