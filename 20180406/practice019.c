/*一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？*/
#include <stdio.h>
int main()
{
	float l,a[10];
	int i;
	a[0]=100*0.5;
	l=100+2*a[0];
	for(i=1;i<10;i++)
		{
			a[i]=0.5*a[i-1];
			l=l+2*a[i];
		}
	l=l-2*a[9];
	printf("%f,%f",a[9],l);
	return 0;
	
}