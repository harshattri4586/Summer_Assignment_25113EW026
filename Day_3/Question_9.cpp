#include <iostream>
using namespace std;

void is_prime(int n){
    for (int i=2;i<n;i++){
        if(n%i == 0){
            cout << "Given number is not prime"<< endl;
            return ;
        }
    }

    cout << "Given number is prime"<< endl;

    return ;
}

int main(){
    int n;
    cout <<  "Enter a number: ";
    cin >> n;

    is_prime(n);
    return 0;
}