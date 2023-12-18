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
   a+=2;
   printf("\n%d",a);
}
