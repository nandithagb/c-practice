#include<stdio.h>
int main()
{
	int num,i;
	printf("enter your number\n");
	scanf("%d",&num);
	printf("factors of %d\n",num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		printf("%d ",i);
	}
	
	return 0;
	
	
}
