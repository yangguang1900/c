#include <stdio.h>

int main()
{
	char a[3][3]={' ','*',' ','*',' ','*',' ','*',' '};
	char b[]= " * \n* *\n * \n";
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
			printf("%c",a[i][j]);
		printf("\n");
	}
	
	printf("%s",b);
	return 0;
}