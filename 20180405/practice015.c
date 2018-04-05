/*输入两个正整数m和n，求其最大公约数和最小公倍数。*/
#include <stdio.h>
int main()
{
	int m,n,i,j,t;
	printf("Input two numbers:\n");
	scanf("%d,%d",&m,&n);
	if(m<n)
	{
		t=m;
		m=n;
		n=t;
	}
	for(i=n;i>0;i--)
		if(m%i==0&&n%i==0)break;
	printf("The greatest common divisor of %d and %d is:%d.\n",m,n,i);
	for(j=m;j<=m*n;j++)
		if(j%m==0&j%n==0)break;
	printf("The least common multiple of %d and %d is:%d.\n",m,n,j);
	return 0;
}