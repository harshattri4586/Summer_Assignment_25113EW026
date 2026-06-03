#include <iostream>
using namespace std;

void is_prime(int n){
    for (int i=2;i<n;i++){
        if(n%i == 0){
            cout << "Given "<< n<<" is not prime"<< endl;
            return ;
        }
    }

    cout << "Given "<< n <<" is  prime"<< endl;

    return ;
}

int main(){
    int n;
    cout <<  "Enter a number: ";
    cin >> n;

    for(int i=1;i<=n;i++){
        is_prime(i);
    }
    return 0;
}