#include<stdio.h>
int main(){
	int a[5]={9,6,1,2,3};
	int min=a[0];
	for (int i=1;i<=4;i++){
		if(a[i]<min){
			min=a[i];
		}
		printf("min value is :%d",min);
		}