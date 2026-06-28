#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], longest[100];
    int maxLength = 0, start = 0;

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    int len = strlen(str);

    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int wordLength = i - start;

            if (wordLength > maxLength) {
                maxLength = wordLength;

                for (int j = 0; j < wordLength; j++) {
                    longest[j] = str[start + j];
                }
                longest[wordLength] = '\0';
            }

            start = i + 1;
        }
    }

    cout << "Longest word: " << longest << endl;
    cout << "Length: " << maxLength << endl;

    return 0;
}