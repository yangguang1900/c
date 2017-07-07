#include <stdio.h>

int main()
{
	int a[40]={1,1};
	int i;
	for(i=2;i<=39;i++)
		a[i]=a[i-2]+a[i-1];
	for(i=0;i<=39;i++)
		printf("%d\n",a[i]);
	return 0;
}