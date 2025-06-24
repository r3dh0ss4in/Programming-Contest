#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void plus_min(int a, int b) {
    cout << (a)+(b) << endl;
    int c = (a)-(b);
    if(c>0) {
        cout << c;
    } else {
        cout << -c;
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    void (*P)(int,int);
    P = plus_min;
    P(a,b);
}