#include<stdio.h>
int main()
{
    int c=0, n, k, tmp;
    scanf("%d%d", &n, &k);
    tmp =240-k;
    for (int i=1; i<=n && tmp>0; i++) {
        if (tmp>=5*i) {
            tmp -= 5*i;
            c++;
        }
    }
    printf("%d", c);

    return 0;
}
