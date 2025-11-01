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
    int n,m; cin >> n >> m;
    map<string,string> mp;
    string name, ip;
    while(n--) {
        cin >> name >> ip;
        mp[ip]=name;
    }
    for(int i=1; i<=m; i++) {
        cin >> name >> ip;
        cout << name << ' ' << ip << " #";
        ip=ip.substr(0, ip.size()-1);
        cout << mp[ip];
        cout << endl;
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