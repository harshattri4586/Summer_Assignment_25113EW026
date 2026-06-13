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

    // Count Even and Odd  element
    int even = 0;
    int odd = 0;
    for(int i=0;i<size;i++){
        if(arr[i]%2 == 0){
            even++;
        }else{
            odd++;
        }

    }

    cout << "There are [ " << even <<" ] even element and [ "<< odd << " ] odd element." <<endl;

    return 0;
}