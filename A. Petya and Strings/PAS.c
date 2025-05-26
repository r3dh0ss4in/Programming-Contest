#include <stdio.h>
#include <string.h>

int main() {
    char str_1[100], str_2[100];
    scanf("%s", &str_1);
    scanf("%s", &str_2);

    // Using strcasecmp() for case-insensitive comparison
    if (strcasecmp(str_1, str_2) == 0) {
        printf("0");
    } else if(strcasecmp(str_1, str_2)>0) {
        printf("1");
    } else {
        printf("-1");
    }

    return 0;
}