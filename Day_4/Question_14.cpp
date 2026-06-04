#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int a = 0;
    int b = 1;
    int ans = 0;
    
    if(n<=2){
        if(n == 1){
            ans = a;
        }else {
            ans = b;
        }
    }else {

        for(int i=3;i<=n;i++){
            ans = a+b;
            a = b;
            b = ans;
        }
    }

    cout << "The number on "<< n <<"th term is "<< ans << endl;

    return 0;
}