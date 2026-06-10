#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter height of the pyramid: ";
    cin >> n;

    int star  = 2*n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << "   ";
        }
        for(int k=star;k>0;k--){
            cout << " * ";
        }
        star-=2;
        cout << endl;
    }
    return 0;
}