#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int countFreq(int a[],int n,int e){
    int freq[n];
    memset(freq,0,sizeof(freq));
    for(int i = 0 ;i<n;i++){
        freq[a[i]]++;
    }
    return freq[e];
    
}
int first(int arr[], int x, int n)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        // Normal Binary Search Logic
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
 
        // If arr[mid] is same as x, we
        // update res and move to the left
        // half.
        else {
            res = mid;
            high = mid - 1;
        }
    }
    return res;
}
int last(int arr[], int x, int n)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        // Normal Binary Search Logic
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
 
        // If arr[mid] is same as x, we
        // update res and move to the right
        // half.
        else {
            res = mid;
            low = mid + 1;
        }
    }
    return res;
}
int countFreqBinSearch(int a[],int n,int x){
    int firstOcc = first(a,n,x);
    int lastOcc = last(a,n,x);
    return (lastOcc - firstOcc + 1);

}
int main(){
    int a[] = {1,2,3,4,4,4,5,5,6,7,7,8,9};
    int n = sizeof(a)/sizeof(a[0]);
    int e;
    cout<<"Enter the number";
    cin>>e;
    int ans = countFreqBinSearch(a,n,e);
    cout<<"Freq is : "<<ans;
}
    // int ans = countFreq(a,n,e);
    // cout<<"Freq of "<<e<<" is : "<<ans;
