#include <iostream>
using namespace std;
bool isSorted(int *a,int n){
    if(n==1){
        return true;
    }
    if(a[0] < a[1] && isSorted(a+1,n-1)){
        return true;
    }
    return false;
}
int main(){
    int a[] = {1,10,3,4,5,6,7};
    cout<<isSorted(a,7);
}