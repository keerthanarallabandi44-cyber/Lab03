#include <stdio.h>

int main() {
    char a[200], b[200];
    int i = 0;

    printf("enter first string: ");
    fgets(a, 200, stdin);
    printf("enter second string: ");
    fgets(b, 200, stdin);

    while (a[i]!='\0'&& b[i]!='\0' && a[i] == b[i]) {
        i++;
    }

    if (a[i] == b[i]) {
        printf("strings are equal\n");
    } else {
        printf("strings are not equal\n");
    }

    return 0;
}
