#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
	ll t;
	string op;
	deque<ll> dq;
	cin >> t;
	bool reversed = false;
	while(t--) {
		cin >> op;
		if(op=="push_back") {
			ll x;
			cin >> x;
			if(reversed) {
				dq.push_front(x);
			} else {
				dq.push_back(x);
			}
		} else if(op=="toFront") {
			ll x;
			cin >> x;
			if(reversed) {
				dq.push_back(x);
			} else {
				dq.push_front(x);
			}
		} else if(op=="reverse") {
			if(!reversed) {
				reversed = true;
			} else {
				reversed = false;
			}
		} else if(op=="back") {
			if(!dq.empty()) {
				if(reversed) {
					cout << dq.front() << endl;
					dq.pop_front();
				} else {
					cout << dq.back() << endl;
					dq.pop_back();
				}
			} else {
				cout << "No job for Ada?" << endl;
			}
		} else if(op=="front") {
			if(!dq.empty()) {
				if(reversed) {
					cout << dq.back() << endl;
					dq.pop_back();
				} else {
					cout << dq.front() << endl;
					dq.pop_front();
				}
			} else {
				cout << "No job for Ada?" << endl;
			}
		}
	}
}