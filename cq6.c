#include<stdio.h>
int main() {
    int num;
    printf("Enter a value: ");
    scanf("%d", &num);
    
    if (num % 5 == 0) {
        printf("%d is divisible by 5\n", num);
    } else {
        printf("%d is not divisible by 5\n", num);
    }
    
    return 0;
}