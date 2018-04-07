/*给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。*/
#include<stdio.h>
int main()
{
	int x,a,b,c,d,e;
	printf("Input a number:\n");
	scanf("%d",&x);
	a=x/10000;
	b=(x%10000)/1000;
	c=(x%1000)/100;
	d=(x%100)/10;
	e=x%10;
	if(a>9)
		printf("error!");
	else if(a!=0)
		printf("%d have 5 digits.\n%d,%d,%d,%d,%d",x,e,d,c,b,a);
	if(a==0&b!=0)
		printf("%d have 4 digits.\n%d,%d,%d,%d",x,e,d,c,b);
	if(a==0&b==0&c!=0)
		printf("%d have 3 digits.\n%d,%d,%d",x,e,d,c);
	if(a==0&b==0&c==0&d!=0)
		printf("%d have 2 digits.\n%d,%d",x,e,d);
	if(a==0&b==0&c==0&d==0)
		printf("%d have 1 digit.\n%d",x,e);
	return 0;
}