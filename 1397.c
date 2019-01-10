#include<stdio.h>

int main()
{
	int n,a,b,a1,b1,i;
	
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
		break;
		a1=b1=0;
		for(i=1;i<=n;++i)
		{
			scanf("%d %d",&a,&b);
			if(a>b)
			a1++;
			else if(b>a)
			b1++;
		}
		printf("%d %d\n",a1,b1);
	}
	return 0;
}