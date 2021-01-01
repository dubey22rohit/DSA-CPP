#include <bits/stdc++.h>
#include <ostream>
using namespace std;
float area(float a, float b, float c)  
{  
    // Length of sides must be positive  
    // and sum of any two sides  
    // must be smaller than third side.  
    if (a < 0 || b < 0 || c < 0 ||  
       (a + b <= c) || a + c <= b ||  
                       b + c <= a)  
    {  
        cout << "Not a valid trianglen";  
        
    }  
    float s = (a + b + c) / 2;  
    return sqrt(s * (s - a) *  
                    (s - b) * (s - c));  
}  
float distanceFor(float x1, float y1, float x2, float y2) {
  float x1x2 = pow(x1 - x2, 2);
  float y1y2 = pow(y1 - y2, 2);
  float tot = x1x2 + y1y2;
  return sqrt(tot);
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    set<int> ansset;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
          int ai = a[i];
          int aj = a[j];
        float a = distanceFor(ai, 0, 0, 1);
        //cout<<"a : "<<a<<endl;
        float b = distanceFor(aj, 0, 0, 1);
        //cout<<"b : "<<b<<endl;
        float c = distanceFor(ai, 0, aj, 0);
        //cout<<"c : "<<c<<endl;
        float ar = area(a, b, c);
        //cout<<"Area : "<<ar<<endl;
        if (ar > 0) {
          ansset.insert(ar);
        }
      }
    }
    cout <<"Answer size : "<<ansset.size()<<endl;
  }
}