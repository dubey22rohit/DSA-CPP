#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        set<int> ans;
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                int temp = a[j] - a[i];
                ans.insert(temp);
            }
        }
        cout<<"ans : "<<ans.size()<<endl;
    }
}