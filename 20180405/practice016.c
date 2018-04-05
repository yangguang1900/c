/*求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。*/
#include <stdio.h>
int main()
{
	int s,a,b,n,i;
	printf("Input 2 numbers:\n");
	scanf("%d,%d",&a,&n);
	s=a;
	b=a;
	for(i=1;i<=n-1;i++)
	{
		b=b*10+a;
		s=s+b;
	}
	printf("%d",s);
	return 0;
}