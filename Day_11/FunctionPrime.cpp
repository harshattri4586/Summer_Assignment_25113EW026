#include <iostream>
using namespace std;

void checkPrime(int a){
    bool isPrime = 1;
    for(int i=2;i<a;i++){
        if(a%2 == 0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime){
        cout<< "Given number is Prime" << endl;
    }else{
        cout << "Given number is not Prime" << endl;
    }

    return ;
}

int main(){
    int n,m;
    cout << "Enter the number: ";
    cin >> n;

    checkPrime(n);

    return 0;
}