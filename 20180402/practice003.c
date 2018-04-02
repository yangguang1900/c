/*题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？*/
#include <stdio.h>
int main()
{
	int a,m,n;
	int flag=0;
	for(m=10;m<=168;m++)
	{
		for(n=m+1;n<168;n++)
			if((n-m)*(n+m)==168)
			{
				flag=1;
				a=m*m-100;
				printf("%d,%d,%d",a,m,n);
				break;
			}
		if(flag==1)break;
	}
}
