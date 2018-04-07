/*求1+2!+3!+...+20!的和。*/
#include<stdio.h>
int main()
{
	double n=0,f(int m);
	int i;
	for(i=1;i<=20;i++)
		n+=f(i);
	printf("%f",n);
	return 0;
}
double f(int m)
{
	double factoril=1;
	int j;
	for(j=1;j<=m;j++)
		factoril=factoril*j;
	return factoril;
}
