/*请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。  */
#include<stdio.h>
int main()
{
	char i,j;
	printf("Input a letter:\n");
	scanf("%c",&i);
	getchar();
	if(i>'A'&&i<'Z')
		i=i+32;
	switch(i)
	{
		case 'm':
		{
			printf("The day is monday.");
			break;
		}
		case 't':
		{
			printf("Input another letter:\n");
			scanf("%c",&j);
			if(j=='u')
				printf("The day is tuesday.");
			else if(j=='h')
				printf("The day is thursday.");
			else
				printf("error!");
			break;
		}
		case 'w':
		{
			printf("The day is wednesday.");
			break;
		}
		case 'f':
		{
			printf("The day is friday.");
			break;
		}
		case 's':
		{
			printf("Input another letter:\n");
			scanf("%c",&j);
			if(j=='a')
				printf("The day is saturday.");
			else if(j=='u')
				printf("The day is sunday.");
			else
				printf("error!");
			break;
		}
		default:
		{
			printf("error!");
			break;
		}
	}
	return 0;
}