#include <iostream>
using namespace std;
int linearSearch(int *a,int i,int n,int k){
    if(i == n){
        return -1;
    }
    if(a[i] == k){
        return i;
    }
    return linearSearch(a,i+1, n,k);
}
int main(){
    int a[] = {1,2,3,4,5,6,7};
    cout<<linearSearch(a,0,7,5);
}