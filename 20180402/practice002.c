/*题目：企业发放的奖金根据利润提成。

利润(I)低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
20万到40万之间时，高于20万元的部分，可提成5%；
40万到60万之间时高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%；
高于100万元时，超过100万元的部分按1%提成。
从键盘输入当月利润I，求应发放奖金总数？*/

#include <stdio.h>
int main()
{
	int revenue;
	float bonus;
	printf("The revenue is:");
	scanf("%d",&revenue);
	if(revenue<=10)
		bonus=0.1*revenue;
	else if(revenue<=20)
		bonus=0.1*10+0.075*(revenue-10);
	else if(revenue<=40)
		bonus=0.1*10+0.075*(20-10)+0.05*(revenue-20);
	else if(revenue<=60)
		bonus=0.1*10+0.075*(20-10)+0.05*(40-20)+0.03*(revenue-40);
	else if(revenue<=100)
		bonus=0.1*10+0.075*(20-10)+0.05*(40-20)+0.03*(60-40)+0.015*(revenue-60);
	else 
		bonus=0.1*10+0.075*(20-10)+0.05*(40-20)+0.03*(60-40)+0.015*(100-60)+0.01*(revenue-100);
	printf("The bonus is:%5.3f",bonus);
}