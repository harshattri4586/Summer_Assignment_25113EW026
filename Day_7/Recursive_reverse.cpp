#include <iostream>
#include <math.h>
using namespace std;

int reverse(int n){
    int a = n;
    int i = 0;
    while(a!=0){
        a = a/10;
        i++;
    }
    a = 0;
    float ans = 0;
    if(n>0){
        a = n%10;
        n = n/10;
        ans = a*pow(10,i)+reverse(n);
    }

    return ans;
}

int main(){
    int n;
    cout << "Where is number? "<< endl;
    cin >> n;

    cout << reverse(n)/10 << endl;

    return 0;

}