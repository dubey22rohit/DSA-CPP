#include<bits/stdc++.h>
using namespace std;
int main(){
int a[1000];
int n;
cin>>n;
for(int i = 0;i<n;i++){
cin>>a[i];
}
int cs = 0;
int ms = INT_MIN;
for(int i = 0;i<n;i++){
cs = cs + a[i];
ms = max(ms,cs);
if(cs < 0){
cs = 0;
}
}
cout<<"Maximum Sum : "<<ms;
}
