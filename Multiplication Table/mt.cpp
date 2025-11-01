#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define vl vector<ll>
#define vi vector<int>
#define vc vector<char>
struct matrix {
    int mat[2][2];
};
ll umx = 1e5+9;
#define ios_base ios_base::sync_with_stdio(0), cin.tie(0);

void solve() {
    ll n; cin >> n;
    ll tgt=n*n/2+1;
    ll low=0,high=n*n;
    ll ans=high;
    while(low<=high) {
        ll mid=(low+high)/2;
        ll cnt=0;
        for(int i=1; i<=n; i++) {
            cnt=cnt+min(n,mid/i);
        }
        if(cnt>=tgt) {
            ans=mid;
            high=mid-1;
        } else {
            low=mid+1;
        }
    }
    cout << ans;
}

int main() {
    ios_base
    solve();
    // int t; cin >> t;
    // while(t--) {
    //     solve();
    //     cout << endl;
    // }
}