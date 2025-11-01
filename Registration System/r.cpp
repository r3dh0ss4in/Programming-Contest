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

void solve() {
    int n; cin >> n;
    map<string, int> mp;
    while(n) {
        string s; cin >> s;
        // string name;
        if(mp.find(s)==mp.end()) {
            cout << "OK";
            mp[s]++;
        } else {
            cout << s << mp[s];
            mp[s]++;
        }
        n--;
        cout << endl;
    }
}

int main() {
    ios_base
    solve();
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