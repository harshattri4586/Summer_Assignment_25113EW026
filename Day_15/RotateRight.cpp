#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int, 6> arr = {1, 2, 3, 4 , 5, 6};
    array<int, 6> temp;
    int k;
    cout << "Rotate with? ";
    cin >> k;

    for(int i=0;i<arr.size();i++){
        temp[(i+k)%arr.size()] = arr[i];
    }

    for(int i=0;i<arr.size();i++){
        cout << temp[i] << " " ;
    }

    return 0;
}