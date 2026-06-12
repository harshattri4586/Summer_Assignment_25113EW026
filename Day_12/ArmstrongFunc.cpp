#include <iostream>
#include <math.h>
using namespace std;

void checkArmstrong(int a){
    int b = a;
    int count = 0;
    while(a!=0){
        count++;
        a/=10;
    }
    float ans = 0;
    a = b;
    while(a!=0){
        ans = ans + pow((a%10),count);
        a/=10;
    }
    // cout << ans <<endl;
    if(b == ans){
        cout << "Given number is armstrong number." << endl;
    }else{
        cout << "Given number is not armstrong number." << endl;
    }

    return ;
}

int main(){
    int n;
    cout << "Enter number to check: ";
    cin >> n;

    checkArmstrong(n);

    return 0;
}