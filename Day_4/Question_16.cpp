#include <iostream>
#include <math.h>
using namespace std;

int checkArmstong(int n){
    int m = n;
    int a = m;
    int count = 0;
    while(n>0){
        n=n/10;
        count++;
    }

    int rem = 0;
    float ans = 0;
    while(m>0){
        rem = m%10;
        ans = ans + pow(rem,count);
        m = m/10;
    }

    if(a == ans){
        return ans;
    }

    return 0;
}

int main(){
    int n1,n2;
    cout << "Enter starting number: ";
    cin >> n1;
    cout << "Enter ending number: ";
    cin >> n2;

    int ans = 0;

    for(int i=n1;i<=n2;i++){
        ans = checkArmstong(i);
        if(ans == 0){
            continue;
        }
        else{
            cout << ans << endl;
        }
    }

    return 0;
}