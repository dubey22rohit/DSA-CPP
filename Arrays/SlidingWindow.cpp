#include <climits>
#include <iostream>
using namespace std;
int maxSum(int arr[],int n,int k){
    if(k>=n){
        return -1;
    }
    int max_sum = 0;
    for(int i = 0;i<k;i++){
        max_sum +=arr[i];
    }
    int window_sum = max_sum;
    for(int i = k;i<n;i++){
        window_sum += arr[i] - arr[i-k];
        max_sum = max(max_sum,window_sum);
    }
    return max_sum;
}
int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,11};
    int ans = maxSum(a,10,2);
    cout<<"Max Sum : "<<ans;
}