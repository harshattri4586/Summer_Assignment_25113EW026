#include <iostream>
using namespace std;

int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    return (n*fact(n-1));
}

int main (){
    int n;
    cout << "Enter a number: " ;
    cin >> n;

    int ans = fact(n);
    cout << "The factorial of given number is: " << ans << endl;

    return 0;
}