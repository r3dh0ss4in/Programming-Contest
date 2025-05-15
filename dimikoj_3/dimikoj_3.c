#include<stdio.h>
int main() {
    int i;
    for (i=1000; i>=1; i--) {
        printf("%d\t", i);
        if ((1001-i)%5==0 && i != 1000) {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}
