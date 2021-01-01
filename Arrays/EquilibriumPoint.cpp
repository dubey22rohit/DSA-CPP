#include <bits/stdc++.h>
using namespace std;
int eqPoint(long long a[],int n){
    float s = 0,sum = 0;
    for(int i = 0;i<n;i++){
        s+=a[i];
    }
    for(int i = 0;i<n;i++){
        if(sum == (s-a[i])*0.5) return i;
        if(sum > (s-a[i])*0.5) return -1;
        sum+=a[i];
    }
}
int main(){
    long long a[] = {1,3,5,2,2};
    int eqPt = eqPoint(a,5);
    cout<<eqPt;
}