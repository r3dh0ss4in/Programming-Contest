
#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        char string[100];
        int length;
        scanf("%s", &string);
        length = strlen(string);
        char last_char = string[strlen(string)-1];
        if (length>10) {
            printf("%c%d%c\n", string[0], length-2, last_char);
        }
        else {
            printf("%s\n", string);
        }
    }
}
