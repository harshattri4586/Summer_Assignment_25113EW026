#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int m = n;

    int num = 0;
    while(n>0){
        num = num*10 + (n%10);
        n= n/10;
    }

    if(m == num){
        cout << "The given number is palindrome." << endl;
    }
    else cout << "The given number is not a palindrome." << endl;

    return 0;
}