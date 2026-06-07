#include <iostream>
using namespace std;

int fibonacci(int a){
   if(a<=1){
    return a;
   }

   return fibonacci(a-1)+fibonacci(a-2);
   
}

int main(){
    int n ;
    cout << "Enter: ";
    cin >> n;

    for(int i=0;i<n;i++){
        cout << fibonacci(i) << " " ;
    }

    return 0;
}