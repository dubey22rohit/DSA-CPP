#include<iostream>
using namespace std;
void wavePrint(int a[][10],int R,int C){
	for(int j = 0;j<C;j++){
		if(j&1){
			for(int i = R-1;i>=0;i--){
				cout<<a[i][j]<<" ";
			}
		}else{
			for(int i = 0;i<R;i++){
				cout<<a[i][j]<<" ";
			}
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
wavePrint(a,R,C);
return 0;
}
