/*有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。问第三个人，又说比第2人大两岁。问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？*/
#include<stdio.h>
int main()
{
	int n,age(int m);
	printf("%d",age(5));
	return 0;
}
int age(int m)
{
	if(m==1)
		return 10;
	else 
		return age(m-1)+2;
}