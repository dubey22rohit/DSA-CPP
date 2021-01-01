#include<iostream>
#include<vector>
using namespace std;
int* countingSort(int a[],int n){
    int freq[n];
    int ans[n];
    for(int i = 0;i<n;i++){
        freq[a[i]]++;
    }
    int freqLen = sizeof(freq)/sizeof(freq[0]);
    for(int i = 0;i<freqLen;i++){
        freq[a[i]]--;
        ans[i] = a[i];
    }
    return ans;
}
int main(){
    int arr[] = {5,2,1,4,3};
    int ans[] = countingSort(arr,5);
    for(int i = 0;i<5;i++){
        cout<<ans[i]<<endl;
    }
}