/*
打印出如下图案（菱形）。
   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include<stdio.h>
int main()
{
    int i,j,k;
	void f(int n);
    for(i=0;i<=3;i++)
	f(i);
	for(i=2;i>=0;i--)
	f(i);
	return 0;
}
void f(int n)
{
	int j,k;
	for(j=0;j<=2-n;j++)
		printf(" ");
	for(k=0;k<=2*n;k++)
		printf("*");
    printf("\n");
}
