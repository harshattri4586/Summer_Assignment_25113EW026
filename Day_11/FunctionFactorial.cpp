#include <iostream>
using namespace std;

int factorial(int a){
    int fact = 1;
    if(a == 0){
        fact = 1;
    }else{
        for(int i=1;i<=a;i++){
            fact=fact*i;
        }
    }

    return fact;
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "The Factorial of given number is -> " << factorial(n) << endl;

    return 0;
}