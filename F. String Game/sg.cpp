#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define vl vector<ll>
#define vi vector<int>
#define vc vector<char>
#define bug(a) cout<< #a << " : " << a << endl;
#define bug2(a, b) cout << #a << " : " << a << "   " << #b << " : " << b << endl;

string t, p;
vi arr;
int n;

bool is_sub_sq(string s) {
    int sz=s.size();
    int i=0;
    for(char c : p) {
        while(i<sz&&c!=s[i]) {
            ++i;
        }
        if(i>=sz) {
            return false;
        }
        i++;
    }
    return true;
}

bool f(int mid) {
    vector<bool> alive(n, true);
    for(int i=0; i<mid; i++) {
        alive[arr[i]]=false;
    }
    string s="";
    for(int i=0; i<n; i++) {
        if(alive[i]) {
            s+=t[i];
        }
    }
    return is_sub_sq(s);
}

void solve() {
    cin >> t >> p;
    n=t.size();
    arr.resize(n);
    for(int &i : arr) {
        cin >> i;
        i--;
    }
    int l=0,r=n,ans=0;
    while(l<=r) {
        int mid=(l+r)/2;
        if(f(mid)) {
            ans=mid;
            l=mid+1;
        } else {
            r=mid-1;
        }
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    // int t; cin >> t;
    // int tc=1;
    // while(t--) {
    //     // cout << "tc #" << tc << " ";
    //     solve();
    //     cout << endl;
    //     tc++;
    // }
}