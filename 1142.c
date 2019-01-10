#include<stdio.h>

int main()
{
	int l,a=1,b=2,c=3,i;
	
	while(scanf("%d",&l)!=EOF)
	{
		for(i=0;i<l;i++)
		{
			printf("%d %d %d PUM\n",a,b,c);
			a+=4;
			b+=4;
			c+=4;
		}
	}
	return 0;
}