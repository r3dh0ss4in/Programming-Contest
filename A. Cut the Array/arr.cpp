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

// Dec-->Bin||Bin-->Dec
void decToBinRec(int n, string &bin);
string decToBin(int n);
ll binToDec(ll n);
// Maximum Subarray Sum - Kadane's Algorithm
ll max_subarr_sum(vl &arr);

bool check(string s, string x) {
    if(x.size()<s.size()) {
        return false;
    }
    for(int i=0; i<x.size()-s.size()+1; i++) {
        if(x.substr(i, s.size())==s) {
            return true;
        }
    }
    return false;
}

void solve() {
    int n; cin >> n;
    vl arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    vl pref(n+1, 0);
    for(int i=1; i<=n; i++) {
        pref[i]=pref[i-1]+arr[i-1];
    }
    int s1,s2,s3;
    for(int l=1; l<=n-2; l++) {
        s1=pref[l]%3;
        for(int r=l+1; r<=n-1; r++) {
            s2=(pref[r]-pref[l])%3;
            s3=(pref[n]-pref[r])%3;
            if((s1==s2&&s2==s3)||(s1!=s2&&s1!=s3&&s2!=s3)) {
                cout << l << " " << r;
                return;
            }
        }
    }
    cout << 0 << " " << 0;
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

// Maximum Subarray Sum - Kadane's Algorithm
ll max_subarr_sum(vl &arr) {
    ll res=arr[0];
    ll max_res=arr[0];
    for(int i=1; i<arr.size(); i++) {
        max_res=max(arr[i], max_res+arr[i]);
        res=max(res, max_res);
    }
    return res;
}