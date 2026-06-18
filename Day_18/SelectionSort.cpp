#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }

    for (int x : arr)
        cout << x << " ";

    return 0;
}