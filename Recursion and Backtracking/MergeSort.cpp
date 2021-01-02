#include <iostream>
using namespace std;
void merge(int *a, int s, int e) {
    int temp[100];
  int mid = (s + e) / 2;
  int i = s, j = mid + 1, k = s;
  while(i<=mid && j<=e){
      if(a[i]<a[j]){
          temp[k++] = a[i++];
      }else{
          temp[k++] = a[j++];
      }
  }
  while(i<=mid){
      temp[k++] = a[i++];
  }
  while(j<=e){
      temp[k++] = a[j++];
  }
  for(int i = s;i<=e;i++){
      a[i] = temp[i];
  }
}
void mergeSort(int *a, int s, int e) {
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);
    merge(a,s,e);
}
int main() {
  int a[] = {1, 3, 2, 7, 4, 5, 11, 15, 12};
  int n = sizeof(a) / sizeof(a[0]);
  mergeSort(a, 0, n);
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}