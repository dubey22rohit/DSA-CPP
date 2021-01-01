#include <bits/stdc++.h>
#include <regex>
using namespace std;
//a*b = gcd(a,b) * lcm(a,b)
long long gcd(long long a,long long b){
    if(b == 0){
        return a;
    }else{
        return gcd(b,a%b);
    }

}
long long getSmallestDivNum(long long n) {
  long long ans = 1;
  for (long long i = 1; i <= n; i++) {
    ans = (ans * i) /(gcd(ans,i));
  }
  return ans;
}

int main(){
    int ans = getSmallestDivNum(25);
    cout<<ans;
}