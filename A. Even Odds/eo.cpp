#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
struct matrix {
    int mat[2][2];
};
#define ios_base ios_base::sync_with_stdio(0), cin.tie(0);

int main() {
    ios_base
    ll n, k; cin >> n >> k;
    ll odd_cnt = (n+1)/2;
    ll even_cnt = n/2;
    if(odd_cnt>=k) {
        cout << 2*k-1;
    } else {
        cout << 2*(k-odd_cnt);
    }
}