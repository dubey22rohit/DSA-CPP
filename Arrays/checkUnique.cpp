#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int findUnique(int* arr,int size){
    int ans = 0;
    for(int i = 0;i<size;i++){
        ans ^= arr[i];
    }
    return ans;
}

int main(){
    int arr[] = {2,3,1,6,3,6,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = findUnique(arr,size);
    cout<<ans;
}