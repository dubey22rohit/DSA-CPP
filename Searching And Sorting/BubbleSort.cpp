#include<bits/stdc++.h>
using namespace std;
//Inplace Sorting
//Stable : Yes
//Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.
//Best Case Time Complexity: O(n). Best case occurs when array is already sorted.
//Auxiliary Space: O(1)
void bubbleSort(int arr[],int n){
	for(int i = 0;i<n-1;i++){
		for(int j = 0;j<n-i-1;j++){
				if(arr[j] > arr[j + 1]){
					swap(arr[j],arr[j+1]);
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
