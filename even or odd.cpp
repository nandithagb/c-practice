#include<stdio.h>
int main()
{
	int min,max,i;
	printf("enter two number\n");
	scanf("%d%d",&min,&max);
	for(i=min;i<=max;i++)
	{
		if(i%2==0)
		printf("%d is even number\n",i);
		else
		printf("%d is odd number\n",i);
	}
	return 0;
}
