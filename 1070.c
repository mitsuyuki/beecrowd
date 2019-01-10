#include<stdio.h>

int main()
{
	int n,i=0;
	
	while(scanf("%d",&n)!=EOF)
	{
		while(i<6)
		{
			if(n%2==1)
			{
			printf("%d\n",n);
			i++;
			}
			n+=1;
		}
		i=0;
	}
	return 0;
}