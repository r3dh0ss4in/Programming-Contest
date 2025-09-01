#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios_base ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int main() {
    ios_base
    int n; cin >> n;
    vector<int> arr(n);
    unordered_map<int, int> ump;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        ump[arr[i]]++;
    }
    // for(const auto i : ump) {
    //     cout << i.first << " " << i.second << endl;
    // }
    
    int on_count=0;
    
    for(const auto i : ump) {
        int num = i.first;
        int count = i.second;
        if(count>num) {
            on_count+=(count-num);
        } else if(count<num) {
            on_count+=count;
        }
    }
    cout << on_count;
}