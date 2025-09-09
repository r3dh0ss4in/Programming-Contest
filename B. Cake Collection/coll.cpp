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

void decToBinRec(int n, string &bin);
string decToBin(int n);
int binToDec(int n);

void solve_two() {
    int n,m; cin >> n >> m;
    vl v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    ll col=0;
    sort(v.rbegin(), v.rend());
    for(int i=0; i<n; i++) {
        col+=1LL*v[i]*max(0, m-i);
    }
    cout << col;
}

int main() {
    ios_base
    int t; cin >> t;
    while(t--) {
        solve_two();
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

int binToDec(int n) {
    int num=n;
    int dec_val=0;
    int base=1;
    int tmp=num;
    while(tmp) {
        int last_digit=tmp%10;
        tmp/=10;
        dec_val+=last_digit*base;
        base+=2;
    }
    return dec_val;
}