#include<bits/stdc++.h>
using namespace std;
//Time Complexity: O(n*2)

void selectionSort(int a[],int n){
	for(int i = 0;i<n-1;i++){
		int minIdx = i;
		for(int j = i + 1;j<n;j++){
			if(a[j] < a[minIdx]){
				minIdx = j;
			}
		}
		swap(a[minIdx],a[i]);
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
