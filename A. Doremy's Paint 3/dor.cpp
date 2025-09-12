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
ll mx = 1e5+9;
#define ios_base ios_base::sync_with_stdio(0), cin.tie(0);

void decToBinRec(int n, string &bin);
string decToBin(int n);
ll binToDec(ll n);

void solve() {
    int n; cin >> n;
    vl a(n);
    set<ll> st;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) st.insert(a[i]);
    if(st.size()>2) {
        cout << "NO";
        return;
    } else if(st.size()==1) {
        cout << "YES";
        return;
    }
    int cnt1=0, cnt2=0;
    sort(a.begin(), a.end());
    set<ll>::iterator it=st.begin();
    for(int i=0; i<n; i++) {
        if(*(it)==a[i]) cnt1++;
        else cnt2++;
    }
    int res=0;
    if(cnt1==cnt2) {
        cout << "YES";
        return;
    } else if(cnt1>cnt2) {
        res=cnt1-cnt2;
    } else if(cnt2>cnt1) {
        res=cnt2-cnt1;
    }
    if(res>1) cout << "NO";
    else cout << "YES";
}

int main() {
    ios_base
    int t; cin >> t;
    while(t--) {
        solve();
        cout << endl;
    }
}


// Dec-->Bin||Bin-->Dec
void decToBinRec(int n, string &bin) {
    if (n==0) return;
    decToBinRec(n/2, bin);
    bin.push_back(n%2 + '0');
}
string decToBin(int n) {
    if (n == 0) return "0";
    string bin = "";
    decToBinRec(n, bin);
    return bin;
}

ll binToDec(ll n) {
    ll num=n;
    int dec_val=0;
    int base=1;
    ll tmp=num;
    while(tmp) {
        int last_digit=tmp%10;
        tmp/=10;
        dec_val+=last_digit*base;
        base*=2;
    }
    return dec_val;
}