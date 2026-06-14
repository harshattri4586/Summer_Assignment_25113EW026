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

    int freq = 0;
    int key ;
    cout << "Element? ";
    cin >> key;
    
    for(int j=0;j<size;j++){
        if(key == arr[j]){
            freq++;
        }
    }

    cout << "The Given element is present "<< freq <<" times in a array." << endl;

    return 0;
}