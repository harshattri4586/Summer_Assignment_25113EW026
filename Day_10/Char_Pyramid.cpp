#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter height of the pyramid: ";
    cin >> n;

    int space  = n-1;
    for(int i=1;i<=n;i++){
        char ch = {'A'};
        for(int j=1;j<=space;j++){
            cout << "   ";
        }
        for(int k=1;k<=i;k++){
            cout << " " << ch << " ";
            ch++;
        }
        ch--;
        for(int l=i-1;l>0;l--){
            ch--;
            cout << " " << ch << " ";
        }
        space--;
        cout << endl;
    }
    return 0;
}