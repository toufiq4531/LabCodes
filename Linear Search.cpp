#include <iostream>
using namespace std;

int search(int array[], int n, int x){
    for(int i=0; i<n; i++){
        if(array[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){
    int array[]= {6,9,3,7,8,5};
    int x;

    cout<<"Enter Number to Search: ";
    cin>> x;

    int n = sizeof(array)/ sizeof(array[0]);

    int ans = search(array, n, x);

    if(ans == -1){
        cout<<"Element Not Found";
    }
    else{
        cout<<"Element Found at Index: "<<ans;
    }

    return 0;
}
