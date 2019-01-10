#include<stdio.h>

int main()
{
	int i,p;
		scanf("%d",&i);
	for(p=1;p<=i;p++)
	{
		if((p%2)==1)
		printf("%d\n",p);
	}
	return 0;
}