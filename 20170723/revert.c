 #include <stdio.h>

main()
{
	int a[10]={12,3,3,424,5,34,39,53,25,99};
	int *p,*q;
	int i,temp;
	for(i=0;i<10;i++)
		printf("%5d",a[i]);
	printf("\n");
	p=a;
	q=a+9;
	while(p<q)
	{temp=*p;*p=*q;*q=temp;p++;q--;}
	for(i=0;i<10;i++)
		printf("%5d",a[i]);
	printf("\n");
}
