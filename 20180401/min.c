#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,total=0;
	int flag=1;
	for(a=1;a<100;a++)
	{
		for(b=a+1;b<100;b++)
		{
			for(c=b+1;c<100;c++)
			{
				for(d=c+1;d<100;d++)
				{
					for(e=d+1;e<100;e++)
					{
						for(f=e+1;f<100;f++)
						if((c+d)!=(e+f)&&(a+b)!=c&&(a+b)!=d)
						{
							printf("%3d,%3d,%3d,%3d,%3d,%3d,%3d,%3d,%3d,%3d,%3d\n",c,d,a,b,e,f,c+d,a+b,e+f,a+b+c+d,a+b+e+f);
							total=2*a+2*b+c+d+e+f;
							printf("total=%3d",total);
							flag=0;
							break;
						}
						if(flag==0) break;
					}
					if(flag==0) break;
				}
				if(flag==0) break;
			}
			if(flag==0) break;
		}
		if(flag==0) break;
	}
}
