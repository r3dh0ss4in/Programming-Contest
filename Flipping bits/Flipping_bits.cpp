#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void decToBin(ll n, int bin[32]) {
    for(int i=0; i<32; i++) {
        bin[i] = 0;
    }
    int i=0;
    while(n>0) {
        bin[i] = n%2;
        n = n/2;
        i++;
    }
    // for(int i=31; i>=0; i--) {
    //     cout << bin[i];
    // }
    // cout << endl;
    for(int i=31; i>=0; i--) {
        if(bin[i]==0) {
            bin[i]=1;
        } else {
            bin[i]=0;
        }
    }
    // for(int i=31; i>=0; i--) {
    //     cout << bin[i];
    // }
}

// void printBin(int bin[32]) {
//     for(int i=31; i>=0; i--) {
//         cout << bin[i];
//     }
// }

// ll binToDec(ll n) {
//     ll num = n;
//     int dec_val=0;
//     int base = 1;

//     ll temp =  num;
//     while(temp) {
//         int last_digit = temp%10;
//         temp = temp/10;
//         dec_val += last_digit*base;
//         base = base*2;
//     }
//     return dec_val;
// }

ll binToDec(int bin[32]) {
    ll dec_val = 0;
    for(int i=31; i>=0; i--) {
        if(bin[i]==1) {
            dec_val+=pow(2, i);
        }
    }
    return dec_val;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll x;
        cin >> x;
        int bin[32];
        decToBin(x, bin);
        cout << binToDec(bin);
        cout << endl;
    }
}