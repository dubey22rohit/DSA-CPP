#include <iostream>
using namespace std;

int searchInRotatedArr(int a[], int s, int e, int k) {
  if (s > e) {
    return -1;
  }
  int mid = (s+e)/2;
  if(a[mid] == k){
      return mid;
  }
  if(a[s]<=a[mid]){
      if(k >= a[s] && k <=a[mid]){
          return searchInRotatedArr(a,s,mid-1,k);
      }else{
          return searchInRotatedArr(a,mid+1,e,k);
      }
  }
  if(k >= a[mid] && k <= a[e]){
      return searchInRotatedArr(a,mid+1,e,k);
  }
  return searchInRotatedArr(a,s,mid-1,k);
}
int main(){
    int a[] = {5,6,7,1,2,3,4};
    cout<<searchInRotatedArr(a,0,7,1);
}