#include<bits/stdc++.h>
using namespace std;

int invertDig(int n){
	char a[50];
	sprintf(a,"%d",n);//To convert int to char array;
	int i = 0;
	if(a[i] == '9'){
		i++;
		}
	for(;a[i] != '\0' ; i++){
		int digit = a[i] - '0';//To convert char digit to int digit;
		if(digit >= 5){
			digit = 9 - digit;
			a[i] = digit + '0';//To convert int digit to char digit;
			}
		}
		int ans = atoi(a);//To convert string(char array) to int;
		return ans;
	
	}
int main(){
	cout<<invertDig(4545);
	return 0;
}
