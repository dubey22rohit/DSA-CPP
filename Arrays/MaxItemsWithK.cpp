#include<bits/stdc++.h>
using namespace std;
int maxItems(int a[],int n,int k){
    if(n == 0 || k==0){
        return 0;
    }
    int mx = 0;
    sort(a,a+n);
    int i = 0;
    while(i<n && k >= a[i]){
        mx++;
        k = k - a[i];
        i++;
    }
return mx;
}
int main(){
    int a[] = {1,2,3,4,5,6,8,9,10};
    int ans = maxItems(a,10,15);
    cout<<"max items : "<<ans;
}