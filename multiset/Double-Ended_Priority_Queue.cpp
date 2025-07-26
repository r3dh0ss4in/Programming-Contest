#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
	int n, q;
	cin >> n >> q;
	multiset<int> s;
	while(n--) {
		int x;
		cin >> x;
		s.insert(x);
	}
	// cout << s.size();
	// for(auto& it = s.begin(); it != s.begin()+1; ++it) {
	// 	cout << *it;
	// }

	while(q--) {
		int op;
		cin >> op;
		if(op==0) {
			int j;
			cin >> j;
			s.insert(j);
		} else if(op==1) {
			auto min = s.begin();
			cout << *min << endl;
			auto it = s.find(*min);
			if(it!=s.end()) {
				s.erase(it);
			}
		} else if(op==2) {
			auto max = s.rbegin();
			cout << *max << endl;
			auto it = s.find(*max);
			if(it!=s.end()) {
				s.erase(it);
			}
		}
	}

	// s.insert(3);
	// for(int i : s) {
	// 	cout << i << " ";
	// }

	// auto it = s.begin();
	// cout << *it;
}