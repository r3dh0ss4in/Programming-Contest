#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
struct matrix {
    int mat[2][2];
};
#define ios_base ios_base::sync_with_stdio(0), cin.tie(0);

int main() {
    ios_base
    const int max=21;
    vector<ll> v(max, 1);
    for(int i=1; i<max; i++) {
        // Multiply previous power by 3
        v[i]=v[i-1]*3LL;
    }
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll cost=0;
        ll x=0;
        while(n>0) {
            int rem=n%3;
            if(rem>0) {
                if(x==0) {
                    // cost(0) = 3^{1} + 0 * 3^{-1}
                    cost+=1LL*rem*3LL;
                } else {
                    // cost(x) = 3^{x+1} + x * 3^{x-1}
                    cost+=1LL*rem*(v[x+1]+1LL*x*v[x-1]);
                }
            }
            n/=3;
            ++x;
        }
        cout << cost << endl;
    }
}