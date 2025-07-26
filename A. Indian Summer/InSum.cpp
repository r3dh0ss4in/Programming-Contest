#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
	ll n;
	cin >> n;
	vector<pair<string, string>> uniLea;
	for(int i=0; i<n; i++) {
		string spec, col;
		cin >> spec >> col;
		pair<string, string> leaf = make_pair(spec, col);

		bool already_exist = false;

		for(const auto& picklea : uniLea) {
			if(picklea==leaf) {
				already_exist = true;
				break;
			}
		}

		if(!already_exist) {
			uniLea.push_back(leaf);
		}
	}

	cout << uniLea.size();
}
