#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, q;
		cin >> n >> q;
		int arr1[n], arr2[n];
		arr2[0]=0;
		for(int i=1; i<=n; i++) {
			cin >> arr1[i];
			arr2[i]=arr2[i-1]+arr1[i];
		}

		while(q--) {
			int l,r,k;
			cin >> l >> r >> k;
			int sum = arr2[n]-arr2[r]+arr2[l-1];
			// cout << sum << endl;
			if((sum+(r-l+1)*k)%2!=0) {
				cout << "Yes";
			} else {
				cout << "No";
			}
			cout << endl;
		}
	}
}