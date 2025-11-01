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
    ll n,k; cin >> n >> k;
    vl arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    ll low=0,high=1e18;
    ll ans=1e18;
    while(low<=high) {
        ll mid=(low+high)/2;
        ll products=0;
        for(int i=0; i<n; i++) {
            products+=min(mid/arr[i], (ll)1e9);
        }
        if(products>=k) {
            if(mid<ans) {
                ans=mid;
            }
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