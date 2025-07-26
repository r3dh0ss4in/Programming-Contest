#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
	int n, x, y;
	cin >> n;
	ll mx = 1e5;
	deque<int> dq1;
	deque<int> dq2;
	cin >> x;
	for(int i=0; i<x; i++) {
		int a;
		cin >> a;
		dq1.push_back(a);
	}
	cin >> y;
	for(int i=0; i<y; i++) {
		int a;
		cin >> a;
		dq2.push_back(a);
	}
	int j=0;
	while(1) {
		if(dq1.empty()) {
			break;
		} else if (dq2.empty()) {
			break;
		}
		j++;
		int q = dq1.front();
		int v = dq2.front();
		if(dq1.front()<dq2.front()) {
			dq1.pop_front();
			dq2.pop_front();
			dq2.push_back(q);
			dq2.push_back(v);
		} else if(dq1.front()>dq2.front()) {
			dq2.pop_front();
			dq1.pop_front();
			dq1.push_back(v);
			dq1.push_back(q);
		}
		if(j>=mx) {
			cout << -1;
			break;
		}
	}
	// cout << j << " ";
	if(dq1.empty()) {
		cout << j << " " << 2;
	} else if (dq2.empty()) {
		cout << j << " " << 1;
	}
	// cout << a << " " << b;
	// cout << dq2.back();
}