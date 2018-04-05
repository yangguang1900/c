/*判断101到200之间的素数。*/
#include <stdio.h>
int main()
{
	int i,j;
	for(i=101;i<=200;i=i+2)
	{
		for(j=i-1;j>2;j--)
			if(i%j==0)
					break;
		if(j==2)
			printf("%d,",i);
	}
	return 0;
}

