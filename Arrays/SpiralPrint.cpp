#include<iostream>
using namespace std;
void spiralPrint(int a[][10],int R,int C){
int flag = 0;
int t = 0;
int b = R-1;
int l = 0;
int r = C-1;
while(t <=b && l <=r){
if(flag == 0){
for(int i = l;i<=r;i++){
	cout<<a[t][i]<<" ";
	}
t++;
}

if(flag == 1){
for(int i = t;i<=b;i++){
	cout<<a[i][r]<<" ";
}
r--;
}
if(flag == 2){
for(int i = r;i>=l;i--){
	cout<<a[b][i]<<" ";
}
b--;
}
if(flag == 3){
for(int i = b;i>=t;i--){
	cout<<a[i][l]<<" ";
}
l++;
}
flag = (flag+1)%4;
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
spiralPrint(a,R,C);
return 0;
}
