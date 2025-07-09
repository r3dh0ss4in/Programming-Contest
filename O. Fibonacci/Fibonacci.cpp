#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int t1=0, t2=1, ni;

ll fib(ll);

int main() {
    ll n;
    cin >> n;
    if(n==1) {
        cout << 0;
    } else if(n==2) {
        cout << 1;
    } else if(n>2) {
        cout << fib(n);
    }
}

ll fib(ll n) {
    if(n>1) {
        ni=t1+t2;
        t1=t2;
        t2=ni;
        fib(n-1);
        return t1;
    } else {
        return 1;
    }
}