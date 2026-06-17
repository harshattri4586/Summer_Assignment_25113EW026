#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 2, 3};
    int arr2[] = {2, 2, 4};

    int n1 = 4, n2 = 3;
    bool visited[n2] = {false};

    cout << "Common Elements: ";

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j] && !visited[j]) {
                cout << arr1[i] << " ";
                visited[j] = true;
                break;
            }
        }
    }

    return 0;
}