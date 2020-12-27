#include <iostream>
using namespace std;
void guessNumber(int n,int k){
    int s = 1,e = n;
    while(s<=e){
        int m = (s+e)/2;
        if(m == k){
            cout<<"You found the number k, it is : "<<k<<endl;
            break;
        }else if(m<k){
            s = m+1;
            cout<<"You are guessing a number smaller than k"<<endl;
        }else{
            cout<<"You are guessing a number greater than k"<<endl;
            e = m - 1;
        }
    }
}
int main(){
    guessNumber(30, 20);
}