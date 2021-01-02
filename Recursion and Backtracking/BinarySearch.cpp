#include <iostream>
using namespace std;
int binSearch(int *a,int s,int e,int k){
    int mid = (s+e)/2;
    if(s>e){
        return -1;
    }
    if(a[mid] == k){
        return mid;
    }
    if(k<a[mid]){
        return binSearch(a,s,mid-1,k);
    }
    else{
        return binSearch(a,mid+1,e,k);
    }
}
int main(){
    int a[] = {1,2,3,4,5,6,7};
    cout<<binSearch(a,0,7,5);
}