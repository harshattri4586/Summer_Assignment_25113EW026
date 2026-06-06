#include <iostream>
using namespace std;

int power(int x, int n){
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans*x;
    }
    
    return  ans;
}

int main(){
    int x,n;
    cout << "Enter the number: " ;
    cin >> x;
    cout << "power? ";
    cin >> n;

    int ans = power(x,n);

    cout << "Result-> " << ans << endl;

    return 0;
}