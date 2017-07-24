#include <stdio.h>
#include<string.h>

struct vote
{
	char name[20];
	int count;
}p[3]={"ZHANG",0,"LI",0,"YANG",0};

int main()
{
int i,j;
char person[10];
for(i=0;i<10;i++)
	{
	scanf("%s",person);
	for(j=0;j<3;j++)
		if(strcmp(person,p[j].name)==0)
			p[j].count++;
	}
printf("\n");
for(i=0;i<3;i++)
printf("%s:%3d\n",p[i].name,p[i].count);

return 0;
}
