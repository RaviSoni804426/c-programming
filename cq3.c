#include <stdio.h>
int main() {
    int a;
    printf("Enter a value: ");
    scanf("%d", &a);

    if (a > 1) {
        printf("%d is greater than 1\n", a);
    } else {
        printf("%d is not greater than 1\n", a);
    }

    return 0;
}