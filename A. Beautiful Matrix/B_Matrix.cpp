#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int arr[5][5];
    int x, y, res=0, z;
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if(arr[i][j]==1) {
                x = 2-i; // 0
                y = 2-j; // 1
            }
        }
    }
    if(x<0&&y<0) {
        res = -(x+y);
    } else if(x<0) {
        z = -x;
        res = z+y;
    } else if(y<0) {
        z = -y;
        res = z+x;
    } else if(x>=0&&y>=0) {
        res = y+x;
    }
    cout << res;
}