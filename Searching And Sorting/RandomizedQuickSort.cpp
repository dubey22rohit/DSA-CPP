#include <iostream>
#include <ctime>
#include <cstdlib>
#include <type_traits>
using namespace std;
void shuffle(int *a,int s,int e){
    srand(time(NULL));
    int i,j,temp;
    for(int i = e;i>0;i--){
        j = rand()%(i+1);
        swap(a[i],a[j]);
    }
}
int partition(int *a,int s,int e){
    int i = s-1,j = s,pivot = a[e];
    for(;j<e;j++){
        if(a[j]<=pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[e]);
    return i+1;
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
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);  
    shuffle(arr,0,n-1);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    quickSort(arr, 0, n - 1);  
    cout << "Sorted array: \n";  
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;  
}