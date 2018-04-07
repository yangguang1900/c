/*利用递归方法求5!*/
#include<stdio.h>
int main()
{
	int f(int n);
	printf("%d",f(5));
	return 0;
}
int f(int n)
{
	int factorial;
	if(n==0)
		factorial=1;
	else
		factorial=n*f(n-1);
	return factorial;
}
