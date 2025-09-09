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
#define ios_base ios_base::sync_with_stdio(0), cin.tie(0);


bool isPrime(ll n) {
    if(n<=1) {
        return false;
    }

    for(ll i=2; i*i<=n; i++) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        if(k>1&&n>1) {
            cout << "NO";
        } else if(k==1) {
            if(isPrime(n)) cout << "YES";
            else cout << "NO";
        } else {
            string res = (k==2) ? "YES" : "NO";
            cout << res;
        }
        cout << endl;
        // cout << 131313%3;
    }
}