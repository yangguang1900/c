/*打印楼梯，同时在楼梯上方打印两个笑脸。*/
#include <stdio.h>
int main()
{
	int i,j;
	printf("\1\1\n");
	for(i=0;i<8;i++)
		{
			for(j=0;j<=i;j++)
				printf("%c%c",'\xA1','\xF6');
			printf("\n");
		}
	return 0;
}