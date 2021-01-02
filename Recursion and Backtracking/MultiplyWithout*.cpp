#include <iostream>
using namespace std;
int mul(int a,int b){
    if(a == 0 || b == 0){
        return 0;
    }
    if(a == 1){
        return b;
    }
    if(b == 1){
        return a;
    }
    return a + mul(a,b-1);
}
int multiply(int a,int b){
    int m = mul(a,abs(b));
    return (b<0)? -m : m;
}
int main(){
    cout<<multiply(4,4)<<endl;
    cout<<multiply(4,-4)<<endl;
    cout<<multiply(-4,4)<<endl;
    cout<<multiply(-4,-4)<<endl;
}