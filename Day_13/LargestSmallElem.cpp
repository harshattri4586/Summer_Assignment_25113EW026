#include <iostream>
#include <array>
using namespace std;

int main(){
    int size;
    cout << "Give size of the array? " ;
    cin >> size ;

    array<int, 100> arr;

    // Taking input 
    cout << "Give input: " <<endl;
    for(int i=0;i<size;i++){
        cout << i+1 << " Element: ";
        cin >> arr[i];
    }

    // Largest and Smallest element
    int max = arr[0];
    int min = arr[0];

    for(int i=0;i<size;i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }

    cout << "The maximum element of the array is -> " << max <<endl;
    cout << "The minimum element of the array is -> " << min <<endl;

    return 0;
}