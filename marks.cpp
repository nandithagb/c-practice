#include<stdio.h>
int main(){
	int i,j,k,l,m,n;
	float total,average,percentage;
	
	
	printf("enter marks kannada,english,maths,ss,gs,hindi");
	scanf("%d%d%d%d%d%d",&i,&j,&k,&l,&m,&n);
	total=i+j+k+l+m+n;
	printf("%f\n",total);
	average=total/6;
	printf("%f\n",average);
	percentage=(total/300)*100;
	printf("%f\n",percentage);
	return 0;
	
	
	
}
