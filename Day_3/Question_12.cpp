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
    cout << "Enter a number: ";
    cin >> a;

    cout << "Enter a number: ";
    cin >> b;

    if(a>b){
        int ans = (a*b)/GCD(a,b);
    
        cout << "The LCM of given numbers is: "<< ans << endl; 
    }
    else{
        int ans = (a*b)/GCD(b,a);

        cout << "The LCM of given numbers is: "<< ans << endl;      
    }

    return 0;
}