#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100], temp[200];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if(strlen(str1) != strlen(str2)) {
        cout << "Not Rotation";
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    bool found = false;

    for(int i = 0; temp[i] != '\0'; i++) {
        int j;
        
        for(j = 0; str2[j] != '\0'; j++) {
            if(temp[i + j] != str2[j])
                break;
        }

        if(str2[j] == '\0') {
            found = true;
            break;
        }
    }

    if(found)
        cout << "Strings are Rotations";
    else
        cout << "Strings are Not Rotations";

    return 0;
}