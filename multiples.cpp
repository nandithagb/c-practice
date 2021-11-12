#include<stdio.h>
int main()
{
	int num,i,k;
	printf("enter your number\n");
	scanf("%d",&num);
	printf("multiples of %d\n",num);
	for(i=1;i<=10;i++)
	{
	
	  printf("%d ",num*i);	
	}
	return 0;
	
}
