#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int product = 1;
    while(n!=0){
        product = product*(n%10);
        n = n/10;
    }

    cout << "The Product of given number is: " << product << endl;
    
    return 0;
}