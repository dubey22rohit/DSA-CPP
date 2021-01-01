#include <iostream>
using namespace std;
//O(LogN + p);
float sqRoot(int n,int p){
    int s = 0;
    int e = n;
    float ans;
    int mid;
    while(s<=e){
        mid = (s+e)/2;
        if(mid*mid == n){
            ans = mid;
            break;
        }
        if(mid*mid < n){
            s = mid + 1;
            ans = mid;
        }else{
            e = mid - 1;
        }
    }
    float inc = 0.1;
    for(int i = 0;i<p;i++){
        while(ans*ans<=n){
            ans+=inc;
        }
        ans -= inc;
        inc/=10;
    }
    return ans;
}
int main(){
    cout<<sqRoot(49,1)<<endl;
    cout<<sqRoot(10,4)<<endl;
    return 0;
}
