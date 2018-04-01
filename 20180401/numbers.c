#include <stdio.h>
int main()
{
int i,j,k,num=0;
for(i=1;i<=4;i++)
	for(j=1;j<=4;j++)
		for(k=1;k<=4;k++)
		{
			if(i!=j&&j!=k&&i!=k)
			{
				printf("%5d",100*i+10*j+k);
				num++;
			}
		}
printf("total=%d",num);
}
