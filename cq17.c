#include <stdio.h>
void test(int);
void main()
{
    int n;
    printf("enter value of n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        test(i);
    }
    
}

void test(int a)
{
   int b=a%10;
   printf("\n%d",b);
}