#include<stdio.h>
int main()
{
    int a, b, c, d, v, s = 0;
    scanf("%d", &v);
    for (d = 1; d <= v; d++) {
        scanf("%d%d%d", &a, &b, &c);
        if (
        (a == 1 && b == 1 && c == 1) ||
        (a == 1 && b == 1 && c == 0) ||
        (a == 1 && b == 0 && c == 1) ||
        (a == 0 && b == 1 && c == 1)
        )
        {
            s++;
        }
    }
    printf("%d", s);

    return 0;
}
