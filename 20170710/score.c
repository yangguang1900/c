#include <stdio.h>



int main()
{
	int max(int m[],int num);
    int min(int m[],int num);
    int aver(int m[],int num);
	int score[10],i;
	for(i=0;i<10;i++)
		scanf_s("%d",&score[i]);
	printf("%d",max(score,10));
	printf("%d",min(score,10));
	printf("%d",aver(score,10));
}

int max(int m[],int num)
{
	int k=m[0],i;
	for(i=0;i<num;i++)
		if(m[i]>k)
			k=m[i];
	return k;
}

int min(int m[],int num)
{
	int k=m[0],i;
	for(i=0;i<num;i++)
		if(m[i]<k)
			k=m[i];
	return k;
}

int aver(int m[],int num)
{
	int k=0,aver,i;
	for(i=0;i<num;i++)
		k=k+m[i];
	aver=k/num;
	return aver;
}