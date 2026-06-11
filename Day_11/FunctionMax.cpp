#include <iostream>
using namespace std;

int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int n,m;
    cout << "Give two numbers for comparison: ";
    cin >> n;
    cin >> m;

    cout << "Maximum is -> " << max(n,m) << endl;

    return 0;
}