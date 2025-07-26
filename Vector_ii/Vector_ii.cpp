#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
	int n, q;
	cin >> n >> q;
	vector<vector<int>> arr(n);
	while(q--) {
		int op, t;;
		cin >> op >> t;
		if(op==0) {
			int x;
			cin >> x;
			arr[t].push_back(x);
		} else if(op==1) {
			if(!arr[t].empty()) {
				for(size_t i=0; i<arr[t].size(); i++) {
					if(i!=0) {
						cout << " ";
					}
					cout << arr[t][i];
				}
			}
			cout << endl;
		} else if(op==2) {
			arr[t].clear();
		}
	}
}