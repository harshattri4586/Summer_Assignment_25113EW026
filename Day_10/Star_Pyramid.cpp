#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter height of the pyramid: ";
    cin >> n;

    int space  = n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            cout << "   ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout << " * ";
        }
        space--;
        cout << endl;
    }
    return 0;
}