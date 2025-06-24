#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int n;
    cin >> n;
    while(n--) {
        char string[100];
        cin >> string;
        int len = strlen(string);
        // cout << len;
        if(len>10) {
            cout << string[0] << len-2 << string[len-1] << endl;
        } else {
            cout << string << endl;
        }
    }
}