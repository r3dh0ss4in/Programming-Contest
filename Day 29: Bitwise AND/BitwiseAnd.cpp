#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t, a, b, max_val=0, x=0, y=0, z=0;
    cin >> t;
    while(t--) {
        cin >> a >> b;
        y=0;
        for(int i=1; i<a; i++) {
            for(int j=i+1; j<=a; j++) {
                // cout << i << " " << j << " " << (i&j) << endl;
                x = (i&j);
                max_val = max(x, y);
                if(max_val<b) {
                    z = max_val;
                }
                y = max_val;
            }
        }
        cout << z << endl;
    }
}