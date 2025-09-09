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
#define ios_base ios_base::sync_with_stdio(0), cin.tie(0);

void solve(int n) {
    vl v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    ll ans=0;
    for(int i=0; i<n-1; i+=2) {
        ll mx=max(v[i], v[i+1]);
        ans+=mx;
    }
    if(n%2!=0) {
        ans+=v.back();
    }
    cout << ans << endl;
}

int main() {
    ios_base
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        solve(n);
    }
}