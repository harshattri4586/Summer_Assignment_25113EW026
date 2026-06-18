#include <iostream>
using namespace std;

int main(){
    int arr[] = {5, 1, 4, 2, 8};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

        swap(arr[i], arr[maxIndex]);
    }

    for(int x:arr){
        cout << x <<" ";
    }

    return 0;
}