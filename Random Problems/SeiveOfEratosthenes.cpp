#include<bits/stdc++.h>
#include <cstring>
using namespace std;
void SieveOfEratosthenes(int arr[],int n){
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(int p = 2;p*p <= n;p++){
        if(prime[p] == true){
            for(int i = 2*p;i<=n;i+=p){
                prime[i] = false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i] == true){
            cout<<i<<" ";
        }
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    SieveOfEratosthenes(arr,15);
}