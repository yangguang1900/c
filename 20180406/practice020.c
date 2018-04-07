/*猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个。第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。*/
#include <stdio.h>
int main()
{
	int f(int m);
	printf("The monkey picked %d peaches in the first day.\n",f(1));
	return 0;
}
int f(int m)
{
	int a;
	if(m<10)
		a=2*(f(m+1)+1);
	else
		a=1;
	return a;
}
