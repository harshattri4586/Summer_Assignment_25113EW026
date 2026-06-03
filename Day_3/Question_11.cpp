#include <iostream>
using namespace std;

int GCD(int a,int b){

    while(a>b){
        int rem = a%b;
        if(rem == 0){
            return b;
        }
        a = b;
        b = rem;
    }

    return 0;
}

int main(){
    int a,b;
    cout << "Enter a number(larger): ";
    cin >> a;

    cout << "Enter a number(smaller): ";
    cin >> b;

    if(a>b){
        int ans = GCD(a,b);
        cout << "The Greatest Common Divisor of given numbers is: "<< ans << endl; 
    }else{
        int ans = GCD(a,b);
        cout << "The Greatest Common Divisor of given numbers is: "<< ans << endl; 
    }

    return 0;
}