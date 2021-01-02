#include <iostream>
using namespace std;
long long power(long long a,long long b){
    //TC proportional to b
    if(b == 0){
        return 1;
    }
    long long ans = a*power(a,b-1);
    return ans;
}
long long optimizedPower(long long a,long long b){
    //TC proportional to Logb
    if(b == 0){
        return 1;
    }
    long long smallAns = optimizedPower(a,b/2);
    smallAns*=smallAns;
    if(b&1){
        return a*smallAns;
    }
    return smallAns;
}
int main(){
    cout<<power(2,50)<<endl;
    cout<<optimizedPower(2,50);
}