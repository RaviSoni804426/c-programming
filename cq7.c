#include <stdio.h>
int main() {
    int num;
    printf("Enter a value: ");
    scanf("%d", &num);
    
    if (num % 5 == 0 && num % 10 == 0) {
        printf("%d is divisible by both 5 and 10\n", num);
    } else {
        printf("%d is not divisible by both 5 and 10\n", num);
    }
    
    return 0;
}

