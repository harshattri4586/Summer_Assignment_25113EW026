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

    // Printing Array
    cout << " Printing Array " <<endl;
    cout << "[ ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << "]";

    return 0;
}