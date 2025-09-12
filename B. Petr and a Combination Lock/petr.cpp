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
    for(int i=0; i<n; i++) cin >> a[i];
    int total_mask=(1<<n);
    for(int mask=0; mask<total_mask; mask++) {
        int sum=0;
        for(int i=0; i<n; i++) {
            if(mask&(1<<i)) sum+=a[i];
            else sum-=a[i];
        }
        if(!((sum%360+360)%360)) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
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