#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = 5;

    int key;
    cout << "Which element you want to find? ";
    cin >> key;

    int s=0;
    int l=n-1;

    // Selection sort
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }

    // Search
    while(s<=l){
        int mid = s + (l-s)/2;

        if(arr[mid] == key){
            cout << "Element Found at index " << mid;
            return 0;
        }
        else if(arr[mid] < key){
            s = mid+1;
        }
        else{
            l = mid-1;
        }
    }

    cout << "Element not found"<<endl;

    return 0;
}