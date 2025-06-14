#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int n, o;
    cin >> n >> o;
    int arr[n];
    int count[o+1] = {0};
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        if(arr[i]>0&&arr[i]<=o) {
            count[arr[i]]++;
        }
    }

    for(int i=1; i<=o; i++) {
        cout << count[i] << endl;
    }
}