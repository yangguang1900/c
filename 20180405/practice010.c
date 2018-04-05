/*古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）*/

#include "stdio.h"
int main()
{
	int month,num;
	int f(int n);
	for(month=1;month<=40;month++)
	{
		num=f(month);
		printf("The amount of rabits in the %dth month is:%d.\n",month,num);
	}
	return 0;
}
int f(int n)
	{
		int m;
		if(n==1||n==2)
			m=1;
		else 
			m=f(n-1)+f(n-2);
		return m;
	}