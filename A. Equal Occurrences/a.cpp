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

// Dec-->Bin||Bin-->Dec
void decToBinRec(int n, string &bin);
string decToBin(int n);
ll binToDec(ll n);
// Maximum Subarray Sum - Kadane's Algorithm
ll max_subarr_sum(vl &arr);

void solve() {
    int n; cin >> n;
    vi arr(n);
    set<int> st;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        st.insert(arr[i]);
    }
    sort(arr.begin(), arr.end());
    vi sub;
    int mx=0;
    for(int i=0; i<st.size(); i++) {
        int cnt=0;
        auto iter = st.begin();
        advance(iter, i);
        for(int j=i; j<n; j++) {
            if(*iter==arr[j]) {
                cnt++;
            }
        }
        sub.push_back(cnt);
    }
    sort(sub.begin(), sub.end());
    // for(auto i : sub) {
    //     cout << i << " ";
    // }
    // cout << endl;
    for(int i=0; i<sub.size(); i++) {
        int sec=0;
        for(int j=i; j<sub.size(); j++) {
            sec+=sub[i];
        }
        // cout << sec << " ";
        mx=max(mx, sec);
    }
    // cout << endl;
    cout << mx;
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