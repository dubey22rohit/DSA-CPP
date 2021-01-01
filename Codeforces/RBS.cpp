#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;

  while (t--) {
    string s;
    cin>>s;
    int len = s.length();
    cin.ignore();
    if (s[0] == ')' || s[len - 1] == '(') {
      cout << "NO" << endl;
    }else if (len % 2 == 0) {
      cout << "YES" << endl;
    } else if(len%2 != 0){
      cout << "NO" << endl;
    }else{
        cout << "NO" << endl;
    }
  }
  
}