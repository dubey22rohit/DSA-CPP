#include <bits/stdc++.h>
#include <stack>
#include <string>
using namespace std;
int isMatching(char a, char b) {
  if ((a == '(' && b == ')') || a == '?') {
    return 1;
  }
  return 0;
}
int isBalanced(string s, stack<char> e, int i) {
  if (i == s.length()) {
    return e.empty();
  }
  char topEl;
  int res;
  if (s[i] == '(') {
    e.push(s[i]);
    return isBalanced(s, e, i + 1);
  } else if (s[i] == ')') {
    if (e.empty()) {
      return 0;
    }
    topEl = e.top();
    e.pop();
    if (!isMatching(topEl, s[i])) {
      return 0;
    }
    return isBalanced(s, e, i + 1);
  } else if (s[i] == '?') {
    stack<char> temp = e;
    temp.push(s[i]);
    res = isBalanced(s, temp, i + 1);
    if (res) {
      return 1;
    }
    if (e.empty()) {
      return 0;
    }
    e.pop();
    return isBalanced(s, e, i + 1);
  }
}
int main() {
  int t;
  cin>>t;
  cin.ignore();
  while (t--) {
    string s;
    getline(cin, s);
    stack<char> ele;
    if (isBalanced(s, ele, 0))
      cout << "YES"<<endl;
    else
      cout << "NO"<<endl;
  }
    return 0;
}