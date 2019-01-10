#include<stdio.h>

int main()
{
	int i,p,q;
		scanf("%d",&i);
		for(p=1;p<=i;p++)
		{
			if((p%2)==0)
			{
				q=(p*p);
				printf("%d^2 = %d\n",p,q);
			}
		}
	return 0;
}