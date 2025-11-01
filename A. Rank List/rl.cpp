#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define vl vector<ll>
#define vi vector<int>
#define vc vector<char>
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
struct matrix {
    int mat[2][2];
};
ll umx = 1e5+9;
#define ios_base ios_base::sync_with_stdio(0), cin.tie(0);

bool cmp(const pair<int,int> &p1, const pair<int,int> &p2) {
    if(p1.first>p2.first) return 1;
    else if(p1.first==p2.first) return(p1.second<p2.second);
    return 0;
}

void solve() {
    int n,k; cin >> n >> k;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    // for(auto i : v) {
    //     cout << i.first << " " << i.second << endl;
    // }
    // cout << endl;
    pair<int,int> pr = make_pair(v[k-1].first, v[k-1].second);
    int cnt=0;
    for(int i=0; i<n; i++) {
        if(pr==v[i]) {
            // cout << v[i].first << " " << v[i].second << endl;
            cnt++;
        }
    }
    cout << cnt;
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