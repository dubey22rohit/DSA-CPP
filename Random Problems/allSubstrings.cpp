#include<iostream>
using namespace std;
void allSubstrings(char *a){
for(int i = 0;a[i]!='\0';i++){
	for(int j = i;a[j]!='\0';j++){
		cout<<"{";
		for(int k = i;k<=j;k++){
		cout<<a[k];
		}
		cout<<"}";
		cout<<endl;
	
	}
}
}
int main(){
char a[100];
cin>>a;
allSubstrings(a);
return 0;
}
