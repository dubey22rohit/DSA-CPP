#include <algorithm>
#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int findDuplicate(int * a,int size){
    sort(a,a+size);
    int ans = 0;
    for(int i = 0;i<size;i++){
        if((a[i] ^ a[i+1]) == 0){
            ans = a[i];
           
        }
    }
    return ans;
}
int main(){
    int arr[] = {0,7,2,5,4,7,1,3,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = findDuplicate(arr,size);
    cout<<ans;
}