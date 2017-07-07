#include <stdio.h>

int main()
{
	int a=1,b=1,c=0,i=0;
	printf("[1]: %d\n",a);
	printf("[2]: %d\n",b);
	for(i=3;i<=40;i++)
	{
		c=a+b;
		printf("[%d]: %d\n",i,c);
		a=b;
		b=c;
	}
	

}