#include <iostream>
using namespace std;
int partition(int *a,int s,int e){
   int i = s-1,j = s,pivot = a[e];
   for(;j<e;j++){
       if(a[j]<=pivot){
           i++;
           swap(a[i],a[j]);
       }
   }
   swap(a[i+1],a[e]);
   return i + 1;
}
void quickSort(int *a,int s,int e){
    if(s>=e){
        return;
    }
    int p = partition(a,s,e);
    quickSort(a,0,p-1);
    quickSort(a,p+1,e);
}
int main(){
    int arr[] = {10, 7, 8, 9, 1, 5};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    quickSort(arr, 0, n - 1);  
    cout << "Sorted array: \n";  
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;  
}