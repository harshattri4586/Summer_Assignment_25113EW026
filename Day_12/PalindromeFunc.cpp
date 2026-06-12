#include <iostream>
using namespace std;

void checkPalindrome(int a){
    int b = a;
    int ans = 0;
    while(a!=0){
        ans = ans*10+(a%10);
        a/=10;
    }
    if(b == ans){
        cout << "Given number is palindrome number." << endl;
    }else{
        cout << "Given number is not palindrome number." << endl;
    }

    return ;
}

int main(){
    int n;
    cout << "Enter number to check: ";
    cin >> n;

    checkPalindrome(n);

    return 0;
}