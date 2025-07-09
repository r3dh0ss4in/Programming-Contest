#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void binary(int n, int m) {
    int bin[32];
    int i=0;
    while(n>0) {
        bin[i] = n%2;
        n = n/2;
        i++;
    }
    if(bin[m]==1) {
        cout << "true";
    } else {
        cout << "false";
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    binary(a, b);
}