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

    int max = INT64_MIN;
    int smax =  max;
    for(int i=0;i<size;i++){
        if(max < arr[i]){
            smax = max;
            max = arr[i];
        }
        else if(arr[i] > smax && arr[i] != max){
            smax = arr[i];
        }
    }
    

    cout << smax << " is the second max element.";

    return 0;
}