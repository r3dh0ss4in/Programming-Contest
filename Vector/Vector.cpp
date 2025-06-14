#include<bits/stdc++.h>
using namespace std;

int main() {
    int q, n;
    cin >> q;
    vector<int> A;
    while(q--) {
        int ele, op, p;
        cin >> op;
        if(op==0) {
            cin >> ele;
            A.push_back(ele);
        } else if(op==1) {
            cin >> p;
            cout << A[p] << endl;
        } else if(op==2) {
            A.pop_back();
        }
    }
    return 0;
}
