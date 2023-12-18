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
    printf("\n********");
    for(int i=n;i>=1;i--)
    {
        test(i);
    }
    
}

void test(int a)
{
   
   printf("\n%d",a);
}
