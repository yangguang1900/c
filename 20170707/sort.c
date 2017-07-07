#include <stdio.h>

int main()
{
	int a[10]={5,6,89,234,1,4,25,88,32,189};
	int i,j;
	int t;
	//for(i=0;i<=9;i++)
	//	scanf("%d",&a[i]);
	for(i=0;i<=9;i++)
		printf("%5d",a[i]);
	printf("\n");
	for(i=0;i<=9;i++)
	{
		for (j=i+1;j<=9;j++)
			if (a[i]>a[j])
				{t=a[i];a[i]=a[j];a[j]=t;}
			else continue;
	}
	for(i=0;i<=9;i++)
		printf("%5d",a[i]);
	return 0;
}