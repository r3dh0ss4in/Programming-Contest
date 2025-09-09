#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define vl vector<ll>
#define vi vector<int>
struct matrix {
    int mat[2][2];
};
#define ios_base ios_base::sync_with_stdio(0), cin.tie(0);


int main() {
    ios_base
    int t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        string s; cin >> s;

        if(n==1) {
            cout << "NO" << endl;
            continue;
        }

        bool ch1=false;
        for(int i=1; i<n; i++) {
            if(s[i]!=s[0]) {
                ch1=true;
                break;
            }
        }
        if(!ch1) {
            cout << "NO" << endl;
            continue;
        }

        bool ch2=false;
        for(int i=0; i<n/2; i++) {
            if(s[i]!=s[n-1-i]) {
                bool isSmaller = s[i]<s[n-1-i];
                ch2=isSmaller;
                break;
            }
        }
        if(ch2) {
            cout << "YES" << endl;
            continue;
        }
        
        if(k>=1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}