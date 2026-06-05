#include <iostream>
#include <math.h>
using namespace std;

int fact(int num){
    int factorial = 1;

    for(int i=1;i<=num;i++){
        factorial=factorial*i;
    }

    return factorial;
}
 
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int m = n;
    int ans = 0;
    int rem ;
    while(n!=0){
        rem = n%10;
        ans = ans+fact(rem);
        n = n/10;
    }

    if(m == ans){
        cout << "The number is a strong number."<< endl;
    }else{
        cout << "The number is not a  strong number."<< endl;
    }

    return  0;
}