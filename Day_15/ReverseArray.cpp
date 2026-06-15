#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int, 6> arr = {1, 2, 3, 4 , 5, 6};

    int s = 0;
    int l = arr.size()-1;

    for(int i=0;i<(arr.size()/2);i++){
        int temp = arr[s];
        arr[s] = arr[l];
        arr[l] = temp;
        s++;
        l--;

    }

    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " " ;
    }

    return 0;
}