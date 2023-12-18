#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 5 && num > 10) {
        printf("%d is greater than 5 and 10\n", num);
    }
    return 0;
}