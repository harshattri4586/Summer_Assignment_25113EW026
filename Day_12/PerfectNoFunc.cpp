#include <iostream>
using namespace std;

void checkPerfectNo (int n){
    int ans = 0;
    int a = n;

    if(n == 1){
        ans = 1;
    }

    for(int i=1;i<n;i++){
        if(n%i == 0){
            ans = ans + i;
        }
    }
    // cout << ans << endl;
    if(a == ans){
        cout << "Given number is a perfect number."<< endl;
    }else{
        cout << "Given number is not a perfect number."<< endl;
    }

    return ;
}

int main(){
    int n;
    cout << "Enter a number to check: ";
    cin >> n;

    checkPerfectNo(n);

    return 0;
}