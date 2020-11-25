#include<bits/stdc++.h>
using namespace std;
void swap(int *xptr,int *yptr){
	int temp = *xptr;
	*xptr = *yptr;
	*yptr = temp;
}
void bubbleSort(int arr[],int n){
	for(int i = 0;i<n-1;i++){
		for(int j = 0;j<n-i-1;j++){
				if(arr[j] > arr[j + 1]){
					swap(&arr[j],&arr[j+1]);
			}
		}
	}
}
int main(){
	int arr[] = {5,2,8,1,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,n);
	for(int i = 0;i<n;i++){
		cout<<arr[i];
	}
return 0;	
}
