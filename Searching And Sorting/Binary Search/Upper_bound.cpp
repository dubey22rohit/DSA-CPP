#include <iostream>
using namespace std;
int UpperOcc(int a[], int n, int k) {
  int s = 0;
  int e = n - 1;
  int ans = -1;
  while (s <= e) {
    int m = (s + e) / 2;
    if (a[m] == k) {
      ans = m;
      s = m + 1;
    }else if(a[m] < k){
        s = m+1;
    }else{
        e = m-1;
    }
  }
  return ans;
}
int main(){
    int a[] = {1,1,2,2,2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    int ans = UpperOcc(a,n,2);
    cout<<"Ans : "<<ans;
}