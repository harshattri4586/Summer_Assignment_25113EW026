#include <iostream>
using namespace std;

int main(){
    int sum;
    cout << "Enter the value of sum: " ;
    cin >> sum;

    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int a=0,b=0;

    for(int i=0;i<9;i++){
        for(int j=i;j<9;j++){
            if(sum == (arr[i]+arr[j])){
                a = arr[i];
                b = arr[j];
                break;
            }
        }
    }

    cout<< "The pair is ("<< a << ","<< b << ")" << endl;

    return 0;
}