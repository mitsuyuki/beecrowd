#include<stdio.h>

int main()
{
	int x[20],i,j;
	
	for(i=19;i>=0;i--)
		scanf("%d",&x[i]);
	for(j=0;j<20;j++)
		printf("N[%d] = %d\n",j,x[j]);
	return 0;
}