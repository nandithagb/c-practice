#include <stdio.h>

int main()
{
int p;
float t,r,si;

printf("enter principle,timeperiod,rate of intrest");
scanf("%d%f%f",&p,&t,&r);

si=(p*t*r)/100 ;
printf("answer is %f",si);
