#include <iostream>
using namespace std;
void bubbleSort(int *a,int i,int n){
    if(n==1){
        return;
    }
    if(i == n-1){
        return bubbleSort(a,0,n-1);
    }
    if(a[i] > a[i + 1]){
        swap(a[i],a[i+1]);
    }
    bubbleSort(a,i+1,n);
}
int main(){
    int a[] = {1,3,2,5,14,9,12,10};
    bubbleSort(a,0,8);
    for(int i = 0;i<8;i++){
        cout<<a[i]<<" ";
    }
}