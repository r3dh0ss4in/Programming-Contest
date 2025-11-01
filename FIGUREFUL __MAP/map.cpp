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

void solve() {
    int n; cin >> n;
    map<pair<int,int>,string> mp;
    while(n--) {
        int x,y; cin >> x >> y;
        string s; cin >> s;
        mp[make_pair(x, y)]=s;
    }
    int t; cin >> t;
    while(t--) {
        int a,b; cin >> a >> b;
        cout << mp[make_pair(a, b)] << endl;
    }
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