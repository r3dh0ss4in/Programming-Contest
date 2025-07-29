#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
	ifstream cin("bcount.in");
    ofstream cout("bcount.out");
	int n,q;
	cin >> n >> q;
	int a[n], arr1[n], arr2[n], arr3[n], a2[n], a3[n];
	int add1[n], add2[n], add3[n];
	add1[0]=0, add2[0]=0, add3[0]=0;
	for(int i=1; i<=n; i++) {
		cin >> a[i];
		if(a[i]!=1) {
			arr1[i]=0;
		} else {
			arr1[i]=a[i];
		}
		if(a[i]!=2) {
			arr2[i]=0;
		} else {
			arr2[i]=a[i];
		}
		if(a[i]!=3) {
			arr3[i]=0;
		} else {
			arr3[i]=a[i];
		}
		add1[i]=add1[i-1]+arr1[i];
		add2[i]=add2[i-1]+arr2[i];
		add3[i]=add3[i-1]+arr3[i];
	}

	// cout << add3[n];

	// for(int i=1; i<=n; i++) {
	// 	cout << arr1[i] << " ";
	// }
	while(q--) {
		int a, b;
		cin >> a >> b;
		int sum1 = add1[b]-add1[a-1];
		int sum2 = add2[b]-add2[a-1];
		int sum3 = add3[b]-add3[a-1];
		cout << sum1/1 << " " << sum2/2 << " " << sum3/3 << endl;
	}
}