#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int, 6> arr = {0, 2, 0, 4 , 5, 6};

    int j = 0;  

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

        for(int i=0;i<arr.size();i++){
        cout << arr[i] << " " ;
    }

    return 0;
}