#include<stdio.h>
int main()
{
   int max,min,i,hcf;
   printf("enter your numbers");
   scanf("%d%d",&min,&max);
   for(i=1;i<=min;i++)
   {
   	if(min%i==0&&max%i==0)
   	hcf=i;
   }
   
	printf("%d is the hcf",hcf);
	return 0;	
}
