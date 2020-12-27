#include<iostream>
#include<vector>
using namespace std;
int* countingSort(int a[]){
    int freq[];
    int ans[];
    for(int i = 0;i<a.length;i++){
        freq[a[i]]++;
    }
    for(int i = 0;i<freq.length;i++){
        freq[a[i]]--;
        ans[i] = a[i];
    }
    return ans;
}
int main(){
    int arr[] = {5,2,1,4,3};
    int ans[] = countingSort(arr);
    for(int i = 0;i<arr.length;i++){
        cout<<ans[i]<<endl;
    }
}