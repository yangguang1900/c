 #include <stdio.h>
 #include <math.h>

int main()
{
	int n=100,m=0,k=0,isprime = 1;
	for(;n<=200;n++)
	{
		isprime = 1;
		k=sqrt(n);
		m=n-1;
		for(;m>=k;m--)
		{
			if(n%m!=0)
				continue;
			else
				isprime = 0;			
		}
		if (isprime) 
			printf("%d\t",n);

	}
}