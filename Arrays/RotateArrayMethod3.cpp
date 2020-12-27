#include <iostream>
using namespace std;
void reverseArray(int arr[],int s,int e){
    while(s<e){
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}
void leftRotate(int a[],int d,int n){
    if(d == 0){
        return;
    }
    reverseArray(a, 0,d-1);
    reverseArray(a, d,n-1);
    reverseArray(a, 0,n-1);
}
int main(){
    int a[] = {1,2,3,4,5,6,7};
    leftRotate(a,2,7);
    for(int i = 0;i<7;i++){
        cout<<a[i]<<" ";
    }
}