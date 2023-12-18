#include<stdio.h>
void test(int);
void main()
{
    int num;
    printf("enter number:\n");
    scanf("%d",&num);
    test(num);
     
     
    
    
}

void test(int n)
{
    for(int i=1;i<=10;i++)
     {
         printf("\n%d*%d=%d",n,i,n*i);
     }
    
}
