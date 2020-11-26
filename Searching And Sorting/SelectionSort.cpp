#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[],int n){
		for(int i = 0;i<n-1;i++){
			int minIndex = i;
			for(int j = i+1;j<n;j++){
				if(a[j] < a[minIndex]){
					minIndex = j;
                }
			}
			swap(a[i],a[minIndex]);
		}
}
int main(){
int arr[] = {5,1,7,9,3,4};
int n = sizeof(arr)/sizeof(arr[0]);
selectionSort(arr,n);

for(int i = 0;i<n;i++){
	cout<<arr[i];
    }
}
