/*输入某年某月某日，判断这一天是这一年的第几天？*/
#include <stdio.h>
int main()
{
	int day,month,year,num;
	printf("Input the date(Year,Month,Day):");
	scanf("%4d,%2d,%2d",&year,&month,&day);
	switch(month)
	{
		case 1:num=0;break;																										
		case 2:num=31;break;
		case 3:num=31+28;break;
		case 4:num=31+28+31;break;
		case 5:num=31+28+31+30;break;
		case 6:num=31+28+31+30+31;break;
		case 7:num=31+28+31+30+31+30;break;
		case 8:num=31+28+31+30+31+30+31;break;
		case 9:num=31+28+31+30+31+30+31+31;break;
		case 10:num=31+28+31+30+31+30+31+31+30;break;
		case 11:num=31+28+31+30+31+30+31+31+30+31;break;
		case 12:num=31+28+31+30+31+30+31+31+30+31+30;break;
		default:printf("error!");
	}
	num=num+day;
	if(((year%4==0&&year%100!=0)||year%400==0)&&month>2)
		num+=1;
	printf("It's the %dth day of the year.",num);
}