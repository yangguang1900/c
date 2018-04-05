/*将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。*/
#include <stdio.h>
int main()
{
	int a,i;
	printf("Input a number:\n");
	scanf("%d",&a);
	int prime(int n);
	if(prime(a)==1)
		printf("%d=1*%d",a,a);
	else
		{
			for(i=2;i<=a;i++)
				while(a%i==0)
				{
					printf("%d",i);
					a=a/i;
					if(a!=1)printf("*");
				}				
		}
}
int prime(int n)
{
	int i;
	for(i=2;i<n;i++)
		if(n%i==0)
			break;
	if(i==n)
		return 1;
	else
		return 0;
}