#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int countFreq(int a[], int n, int e) {
  int freq[n];
  memset(freq, 0, sizeof(freq));
  for (int i = 0; i < n; i++) {
    freq[a[i]]++;
  }
  return freq[e];
}
int first(int a[], int x, int n) {
  int s = 0;
  int e = n - 1;
  int ans = -1;
  while (s <= e) {
    int m = (s + e) / 2;
    if (a[m] == x) {
      ans = m;
      e = m - 1;
    } else if (a[m] > x) {
      e = m - 1;
    } else {
      s = m + 1;
    }
  }
  return ans;
}
int last(int a[], int x, int n) {
  int s = 0;
  int e = n - 1;
  int ans = -1;
  while (s <= e) {
    int m = (s + e) / 2;
    if (a[m] == x) {
      ans = m;
      s = m + 1;
    } else if (a[m] > x) {
      e = m - 1;
    } else {
      s = m + 1;
    }
  }
  return ans;
}
int countFreqBinSearch(int a[], int n, int x) {
  int firstOcc = first(a, n, x);
  int lastOcc = last(a, n, x);
  return (lastOcc - firstOcc + 1);
}
int main() {
  int a[] = {1, 2, 3, 4, 4, 4, 5, 5, 6, 7, 7, 8, 9};
  int n = sizeof(a) / sizeof(a[0]);
  int e;
  cout << "Enter the number";
  cin >> e;
  int ans = countFreqBinSearch(a, e, n);
  cout << "Freq is : " << ans;
}
// int ans = countFreq(a,n,e);
// cout<<"Freq of "<<e<<" is : "<<ans;
