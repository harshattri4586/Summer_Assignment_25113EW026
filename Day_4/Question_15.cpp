#include <iostream>
#include <math.h>
using namespace std;

bool checkArmstong(int n){
    int m = n;
    int a = m;
    int count = 0;
    while(n>0){
        n=n/10;
        count++;
    }
    // cout << count << endl;
    int rem = 0;
    float ans = 0;
    while(m>0){
        rem = m%10;
        ans = ans + pow(rem,count);
        m = m/10;
    }
    // cout << ans << endl;
    if(a == ans){
        return true;
    }

    return false;
}

int main(){
    int n;
    cout << "Enter the number for check: ";
    cin >> n;

    int ans = checkArmstong(n);

    if(ans == 1) cout << "True"<< endl;
    else cout << "False"<< endl;

    return 0;
}