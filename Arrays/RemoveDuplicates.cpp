#include <iostream>
using namespace std;
int remove_duplicate(int a[],int n){
       if(n == 0 || n == 1){
           return n;
       }
       int j = 0;
       for(int i = 0;i<n-1;i++){
           if(a[i] != a[i+1]){
               a[j++] = a[i];
           }
       }
       a[j++] = a[n-1];
       return j;
    }
int main(){
    int a[] = {1,2,2,3,4,4};
    int n = sizeof(a)/sizeof(a[0]);
    n = remove_duplicate(a,n);
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}