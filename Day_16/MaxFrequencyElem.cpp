#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int arr[n] = {1, 2, 1, 3, 3, 3, 3, 2, 2, 1};

    int value = 0;
    int freq ;
    int sfreq = 1;

    for(int i=0;i<n;i++){
        freq = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i]== arr[j]){
                freq ++;
            }
        }
        // cout << arr[i] << " --> "<< freq << endl;
        if(sfreq < freq){
            sfreq = freq;
            value = arr[i];
        }
    }

    cout << value << endl;

    return 0;
}