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
    int s, n; cin >> s >> n;
    // ocut << s << " " << n << endl;
    multimap<int, int> mp;
    int a, b;
    for(int i=0; i<n; i++) {
        cin >> a >> b;
        mp.insert(pair <int, int> (a, b));
    }
    for(auto i=mp.begin(); i!=mp.end(); i++) {
        if(s>i->first) {
            s+=i->second;
        } else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}