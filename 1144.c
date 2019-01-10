#include<stdio.h>

int main()
{
	int n,i,a,b,c;
	
	while(scanf("%d",&n)!=EOF)
	{
		a=b=c=0;
		for (i=1;i<=n*2;i++)
		{
	/*		if (i==1)
			{
				++a;
				++b;
				++c;
				printf("%d %d %d\n",a,b,c);
			}*/
			 if(i%2==1)
			{
				++a;
				b=a*a;
				c=a*b;
				printf("%d %d %d\n",a,b,c);
			}
			else if(i%2==0)
			{
				++b;
				++c;
				printf("%d %d %d\n",a,b,c);
			}
		}
	}
	return 0;
}