#include <iostream>
using namespace  std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    float num = 0;
    int bits;
    while(n>0){
        bits = n & 1;
        if(bits == 1){
            num++;
        }
        n = n>>1;
    }

    cout << "The set bits in the given number is -> " << num << endl;

    return 0;
}