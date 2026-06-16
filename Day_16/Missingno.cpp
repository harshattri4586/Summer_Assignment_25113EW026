#include <iostream>
using namespace std;

int main(){
    int n = 6;
    int arr[6] = {1,2,4,5,6,7};

    float expectedSum = ((n+1)*(n+2))/2;
    int actualSum = 0;

    for(int i=0;i<n;i++){
        actualSum = actualSum + arr[i];
    }
    int ans = expectedSum - actualSum;
    
    cout << "The missing number in the array is "<< ans << endl;

    return 0;
}