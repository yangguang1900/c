#include <stdio.h>

int main()
{
	double pi=0.0,item=0.0;
	int i,j;
	for(i=1;;i++)
	{
		j=i*2-1;
		if(i%2==0) item = -1.0/j; 
		else
			item=1.0/j;
		pi=pi+item;
		if(j>10e6)
			break;
	}
	pi=pi*4;
	printf("%10.8lf,%d",pi,j);

}