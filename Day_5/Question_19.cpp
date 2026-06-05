#include <iostream>
using namespace std;


int main(){
    int n;
    cout << "Enter the number: " ;
    cin >> n;

    int rem ;
    cout << "Factors of "<< n << " are :-"<< endl;
    for(int i=1;i<=n;i++){
        rem = n%i;
        if(rem == 0){
            cout << i << endl;
        }
    }

    return 0;
}