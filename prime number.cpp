#include<stdio.h>
int main ()
{
	int max,min,i,j,count;
	printf("enter max and min value\n");
	scanf("%d%d",&min,&max);
	for(i=min;i<=max;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				count++;	
		}
		//printf("%d",count);
		if(count==2)
			printf("%d ",i);
	}
	 
}
