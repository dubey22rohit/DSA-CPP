#include <iostream>
using namespace std;
int sqRoot(int n){
    if(n == 0 || n == 1){
        return n;
    }
    int s = 1;
    int e = n,ans;
    while(s<=e){
        int mid = (s+e)/2;
        if(mid*mid == n){
            return mid;
        }else if(mid*mid < n){
            s = mid + 1;
            ans = mid;
        }else{
            e = mid - 1;
        }
    }
    return ans;

}
int main(){
    int ans = sqRoot(38);
    cout<<ans;
}