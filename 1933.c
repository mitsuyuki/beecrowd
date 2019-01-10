#include<stdio.h>

int main()
{
	int a,b,c;
	
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(a==b)
		c=a;
		else if(a>b)
		c=a;
		else if (b>a)
		c=b;
		printf("%d\n",c);
	}
	return 0;
}