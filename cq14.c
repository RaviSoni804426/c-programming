#include<stdio.h>
int max(int a, int b)
{
	if(a>b)
	return a;
	else 
	return b;
}
int min(int a, int b)
{
	if (a<b)
	return a;
	else
	return b;
}
void main()
{
	int a,b,c,d,e,max1,min1;
	printf("enter the value of a,b,c,d,e");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	max1=max(a,max(b,max(c,max(d,e))));
		min1=min(a,min(b,min(c,min(d,e))));
		printf("max:%d\nmin:%d",max1,min1);

}