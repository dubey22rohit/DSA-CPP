#include <iostream>
#include <vector>
using namespace std;
void reverseArr(vector<long long> &a, int s, int e) {
  while (s < e) {
    int temp = a[s];
    a[s] = a[e];
    a[e] = temp;
    s++;
    e--;
  }
}
void reverseInGroups(vector<long long> &arr, int n, int k) {

  for (int i = 0; i < n; i += k) {
    int l = i;
    int r = min(i + k - 1, n - 1);
    reverseArr(arr, l, r);
  }
}

int main() { 

    vector<long long> a{1,2,3,4,5};
    reverseInGroups(a,5,3);
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }


}