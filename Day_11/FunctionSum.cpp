#include <iostream>
using namespace std;

int sum(int a, int b){
    return (a+b);
}

int main(){
    int n,m;
    cout << "Give two numbers for addition: ";
    cin >> n;
    cin >> m;

    cout << "Sum of given two numbers is -> " << sum(n,m) << endl;

    return 0;
}