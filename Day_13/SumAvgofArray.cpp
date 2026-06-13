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

    // Calculating sum
    int sum = 0;
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
    }

    float avg = float(sum) / float(size);

    cout << "The sum of array is -> " << sum <<endl;
    cout << "The average of array is -> " << avg <<endl;

    return 0;
}