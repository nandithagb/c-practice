#include<stdio.h>
int main()
{
	int max,min,i;
	printf("enter two numbers\n");
	scanf("%d%d",&min,&max);
	printf("even numbers\n");
	for(i=min;i<=max;i++)
	{
		if(i%2==0)
		printf("%d ",i);
	}
	return 0;
	
}	


 	

