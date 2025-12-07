#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define vl vector<ll>
#define vi vector<int>
#define vc vector<char>
#define bug(a) cout<< #a << " : " << a << endl;
#define bug2(a, b) cout << #a << " : " << a << "   " << #b << " : " << b << endl;

// https://codeforces.com/contest/632/problem/C

bool cmp(string a, string b) {
    return a+b<b+a;
}

void solve() {
    int n; cin >> n;
    string s[n];
    for(int i=0; i<n; i++) {
        cin >> s[i];
    }
    sort(s,s+n, cmp);
    for(string i : s) {
        cout << i;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    // int t; cin >> t;
    // while(t--) {
    //     solve();
    //     cout << endl;
    // }
}