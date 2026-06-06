#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    float num = 0;
    int bits;
    int i = 0;
    while(n>0){
        bits = n & 1;
        num = bits*pow(10,i) + num;
        n = n>>1;
        i++;
    }

    cout << "The binary of given decimal number is " << num <<endl;
}