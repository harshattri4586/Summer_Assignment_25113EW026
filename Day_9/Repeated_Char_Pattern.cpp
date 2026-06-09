#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Give height of star pattern: ";
    cin >> n;

    char a = {'A'} ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << a << " ";
        }
        a = a+1;
        cout << endl;
    }

    return 0;
}