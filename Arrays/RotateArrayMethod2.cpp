#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b == 0){
        return a;   
    }else{
        return gcd(b,a%b);
    }
}
void leftRotate(int arr[],int d,int n){
    d = d%n;
    int GCD = gcd(d,n);
    for(int i = 0;i<GCD;i++){
        int j = i;
        int temp = arr[i];
        while(1){
            int k = j + d;
            if(k>=n){
                k = k - n;
            }
            if(k == i){
                break;
            }
            arr[j] = arr[k];
            j = k; 
        }
        arr[j] = temp;
    }
}
void arrShift(int a[],int n){
    int temp = a[0];
    for(int i = 0;i<n;i++){
        a[i] = a[i+1];
    }
    a[n-1] = temp;
}
void rotate(int a[],int d,int n){
    for(int i = 0;i<d;i++){
        arrShift(a,n);
    }
}

int main(){
    int a[] = {1,2,3,4,5,6,7};
    leftRotate(a,2,7);
    for(int i = 0;i<7;i++){
        cout<<a[i]<<" ";
    }
}