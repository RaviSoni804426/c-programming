#include<stdio.h>
int test(int );
void main()
{
    
    int n,Y;
    printf("enter n:");
    scanf("%d",&n);
     
     Y=test(n);
     printf("\nRes:%d",Y);
    
}


int test(int x)
{
    if(x<=2)
    {
    printf("\n%d",x);
    return x;
    }
    
    else
    {
    printf("\n%d",x);
    return x+test(x-2);
    }
}