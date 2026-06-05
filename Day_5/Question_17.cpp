#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: " ;
    cin >> n;

    int ans = 0;
    int rem ;
    for(int i=1;i<n;i++){
        rem = n%i;
        if(rem == 0){
            ans = ans + i;
        }
    }

    if(ans == n){
        cout <<"The Given number is perfect number" << endl;
    }else{
        cout << "The Given number is not perfect number" << endl;
    }
    return 0;
}