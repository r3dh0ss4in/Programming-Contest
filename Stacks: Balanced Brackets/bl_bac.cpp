#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios_base ios_base::sync_with_stdio(0), cin.tie(0);

string ch_bal(string s) {
    stack<char> st;
    for(auto i : s) {
        if(i=='('||i=='{'||i=='[') {
            st.push(i);
        } else {
            if(st.empty()) {
                return "NO";
            }
            char top = st.top();
            st.pop();
            if(((i==')')&&top!='(')||
                ((i=='}')&&top!='{')||
                ((i==']')&&top!='[')) {
                return "NO";
            }
        }
    }
    return st.empty() ? "YES":"NO";
}

int main() {
    ios_base
    int n; cin >> n;
    while(n--) {
        string s; cin >> s;
        cout << ch_bal(s) << endl;
    }
}