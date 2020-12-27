#include<iostream>
using namespace std;
int find_left_max(int *a,int n,int i){
    int maximum = 0;
    for(int j = 0;j<=i;j++){
        maximum = max(maximum,a[j]);
    }
    return maximum;
}
int find_right_max(int *a,int n,int i){
    int maximum = 0;
    for(int j = n-1;j>=i;j--){
        maximum = max(maximum,a[j]);
    }
    return maximum;
}
int total_water_trapped(int *a,int n){
    int total_water = 0;
    for(int i = 1;i<n-1;i++){
        int left_max = find_left_max(a,n,i);
        int right_max = find_right_max(a,n,i);
        total_water = total_water + min(left_max,right_max) - a[i];
    }
    return total_water;
}
int main(){
    int arr[] = {7,1,6,0,4};
    int ans = total_water_trapped(arr,5);
    cout<<ans;
}