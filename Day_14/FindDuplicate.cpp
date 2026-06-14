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

    int index = 0;
    for(int i=0;i<size-1;i++){
        if((arr[i]^arr[i+1]) == 0){
            index = i;
        }
    }

    cout << "Duplicate element is " << arr[index] << endl;

    return 0;
}