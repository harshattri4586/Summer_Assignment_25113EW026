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

    int key ;
    cout << "Enter the element to find? ";
    cin >> key;
    
    for(int j=0;j<size;j++){
        if(key == arr[j]){
            cout << "Element is present in the array" << endl;
            break;
        }
    }

    return 0;
}