#include <iostream>
using namespace std;
int binarySearch(int *a,int n,int val){
    int s = 0;
    int e = n-1;
    int ans = 0;
    while(s<=e){
        int mid = (s+e)/2;
        if(a[mid] == val){
            return mid;
        }
        else if(val < a[mid]){
            e = mid - 1; 
        }
        else{
            s = mid + 1;
        }
    }
    if(s == e){
        return -1;
    }
}
int main(){
    int arr[] = {1,3,7,9,11,12,45};
    cout<<binarySearch(arr,7,3);
}