#include <stdio.h>

int main()
{
	int i,j,sum=0;
	float aver;
	for(i=1;i<=1000;i++)
	{
		scanf("%d",&j);
		sum=sum+j;
		printf("CurrentSum=%d\n",sum);
		if(sum>=100000) break;
	}
	aver=sum/i;
	printf("%d %6.2f",i,aver);	
	return 0;
}