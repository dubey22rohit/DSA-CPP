#include<bits/stdc++.h>
using namespace std;
//Time Complexity: O(n*2)
void insertionSort(int a[],int n){
for(int i = 1;i<n;i++){
int j = i-1;
int num = a[i];
while(j >=0 && a[j] > num){
	a[j+1] = a[j];
	j--;
}
a[j+1] = num;
}
}
int main(){
    int a[] = {5,3,2,1,0};
    insertionSort(a,5);
    for(int i = 0;i<5;i++){
        cout<<a[i];
    }

}
