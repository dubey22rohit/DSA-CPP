#include<iostream>
using namespace std;
void staircaseSearch(int a[][10],int R,int C,int k){
int i = 0,j = C-1;
while(i<R && j>=0){
    if(a[i][j] == k){
        cout<<"["<<i<<"]"<<"["<<j<<"]";
        break;
    }
    else if(a[i][j] > k){
        j--;
    }else{
        i++;
    }
}
}
int main(){
int a[10][10];
int R,C;
cin>>R>>C;
for(int i = 0;i<R;i++){
    for(int j = 0;j<C;j++){
        cin>>a[i][j];
    }
}
staircaseSearch(a,R,C,14);
}