 #include <stdio.h>

void swap(int *x,int *y)
{
	int t;
	t=*x;*x=*y;*y=t;
}

void swap2(int x,int y)
{
	int t;
	t=x;x=y;y=t;
}

void main()
{
	int a=3,b=5;
	printf("a=%d,b=%d\n",a,b);
	swap2(a,b);
	printf("a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("a=%d,b=%d\n",a,b);
}
