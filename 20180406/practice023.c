/*有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。*/
#include<stdio.h>
int main()
{
	int n;
	float f(int m);
	float a;
	for(n=1;n<=20;n++)
		a=a+f(n+1)/f(n);
	printf("The sum of the first 20 terms is:%f",a);
}
float f(int m)
{
	float i;
	if(m==1)
		i=1;
	else if(m==2)
		i=2;
	else 
		i=f(m-1)+f(m-2);
	return i;
}