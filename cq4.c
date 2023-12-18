#include <stdio.h>
int main() {
    int a;
    printf("Enter a value: ");
    scanf("%d", &a);
    
    if (a > 1) {
        printf("%d is greater than 1\n", a);
    } else if (a < 1) {
        printf("%d is less than 1\n", a);
    } else {
        printf("%d is equal to 1\n", a);
    }
    
    return 0;
}


