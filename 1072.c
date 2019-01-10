#include<stdio.h>

int main()
{
	int n,i,p[10000],in=0,out=0;
	
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i<=n;i++)
		{
			scanf("%d",&p[i]);
			if(p[i]>=10 && p[i]<=20)
			in++;
			else
			out++;
		}
		printf("%d in\n%d out\n",in,out);
		in=0;
		out=0;
	}
	return 0;
}