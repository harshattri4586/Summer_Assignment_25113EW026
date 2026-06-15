#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int, 6> arr = {1, 2, 3, 4 , 5, 6};
    int k;
    cout << "Rotate with? ";
    cin >> k;

    k = k % arr.size();

    int temp[k];
    for(int i=0;i<k;i++){
        temp[i] = arr[i];
    }

    for(int i=k;i<arr.size();i++){
        arr[i-k] = arr[i];
    }

    for(int i = arr.size()-k;i<arr.size();i++){
        arr[i] = temp[i -(arr.size()-k)];
    }
    
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " " ;
    }

    return 0;
}