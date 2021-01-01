#include <iostream>
using namespace std;
int firstOcc(int a[], int n, int k) {
  int s = 0;
  int e = n - 1;
  int ans = -1;
  while (s <= e) {
    int mid = (s + e) / 2;
    if (a[mid] == k) {
      ans = mid;
      e = mid - 1;
    }
    else if(a[mid] < k){
        s = mid + 1;
    }else{
        e = mid - 1;
    }
  }
  return ans;
}
int main(){
    int a[] = {1,1,2,2,2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    int ans = firstOcc(a,n,2);
    cout<<"Ans : "<<ans;
}