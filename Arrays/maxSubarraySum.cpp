#include<iostream>
using namespace std;
int main(){
int a[1000];
int n;
int carr[1000] = {0};//Cumulative sum array
cin>>n;
cin>>a[0];
carr[0] = a[0];
for(int i = 1;i<n;i++){
	cin>>a[i];
	carr[i] = carr[i-1] + a[i];
}	
int csum = 0;
int msum = 0;

int l = -1;
int r = -1;
for(int i = 0;i<n;i++){
	for(int j = i;j<n;j++){
		csum = 0;
		csum = carr[j] - carr[i-1];
			if(csum > msum){
				msum = csum;
				l = i;
				r = j;
			}
		}
	}
	for(int i = l;i<=r;i++){
		cout<<a[i]<<" ";
	}
	cout<<"Max Subarray Sum : "<<msum;
	return 0;
}
