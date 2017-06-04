#include <stdio.h>

int main()
{
	int i=100;
	for(i=100;i<=200;i++)
	{
		if(i%3)
			continue;
		printf("%d\t",i);
		
	}
	printf("\n");
}