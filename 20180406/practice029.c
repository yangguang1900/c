/*一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。*/
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
	if(a==e&&b==d)
		printf("The number is a palindromic number.");
	else
		printf("The number is not a palindromic number.");
	return 0;
}