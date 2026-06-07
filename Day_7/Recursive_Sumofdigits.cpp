#include <iostream>
using namespace std;

int sum(int n){
    int rem;
    int ans = 0;
    if(n>0){
        rem = n%10;
        n= n/10;
        ans = rem + sum(n);
    }else{
        return ans;
    }
}

int main(){
    int n;
    cout << "Number? ";
    cin >> n;

    cout << "The sum of "<< n << " is --> " << sum(n) << endl;

    return 0;
}