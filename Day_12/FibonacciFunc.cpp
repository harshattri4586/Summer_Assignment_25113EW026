#include <iostream>
using namespace std;

void printFibonacci(int n){
    int a = 0;
    int b = 1;
    int c = 0;

    for(int i=1;i<=n;i++){
        cout << a << endl;
        c = a+b;
        a = b;
        b = c;
    }

    return ;
}

int main(){
    int n;
    cout << "How many numbers? ";
    cin >> n;

    printFibonacci(n);

    return 0;
}