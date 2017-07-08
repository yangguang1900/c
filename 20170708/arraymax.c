#include <stdio.h>

int main()
{
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int max=a[0][0],m,n;
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("%3d",a[i][j]);
			if(a[i][j]>=max)
			{max=a[i][j];m=i;n=j;}
		}
		printf("\n");
	}
	printf("%3d,%3d,%3d",max,m,n);
	return 0;
}