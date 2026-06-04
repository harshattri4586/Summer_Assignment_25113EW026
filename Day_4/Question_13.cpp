#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int a = 0;
    int b = 1;
    cout << a << " " ;
    cout << b << " ";

    int c = 0;

    for(int i=3;i<=n;i++){
        c = a+b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}