#include<stdio.h>

int main() {
    int k, n, i, j, count=0;
    scanf("%d", &n);
    scanf("%d", &k);
    int s[n];
    for (i=0; i<n; i++) {
        scanf("%d", &s[i]);
    }
    int k_value = s[k-1];
    for (i=0; i<n; i++) {
        if (s[i]>0 && s[i]>=k_value) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
