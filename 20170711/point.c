 #include <stdio.h>



main()
{
	int a=5,b=3,*p;
	p=&a;
	b=*p+3;
	*p=4;
	printf("a=%d,b=%d",a,b);
}