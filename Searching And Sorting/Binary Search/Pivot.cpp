#include <iostream>
using namespace std;
int pivot(int a[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int m = (s+e)/2;
        if(m<e && a[m] > a[m+1]){
            return m;
        }
        if(m > s && a[m] < a[m-1]){
            return (m-1);
        }
        if(a[s] >= a[m]){
            e = m - 1;
        }else{
            s = m + 1;
        }
    }
    return -1;
}
int main(){
    int a[] = {6,7,8,9,1,2,3,4,5};
    cout<<pivot(a,9);
}