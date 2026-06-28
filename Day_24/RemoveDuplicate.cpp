#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == '0')
            continue;

        for(int j = i + 1; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                str[j] = '0';
            }
        }
    }

    cout << "String after removing duplicates: ";

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != '0')
            cout << str[i];
    }

    return 0;
}