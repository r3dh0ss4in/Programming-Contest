#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
	int t, n;
	priority_queue<int> pq;
	cin >> t;
	while(t--) {
		int y, z;
		cin >> n;
		for(int i=0; i<n; i++) {
			int x;
			cin >> x;
			if(x!=0) {
				pq.push(x);
			}
		}

		while(!pq.empty()) {
			y = pq.top();
			pq.pop();
			cout << y << " ";
			z = y/2;
			if(z!=0) {
				pq.push(z);
			}
		}
		cout << endl;
	}
}