#include<stdio.h>

int main()
{
	int a,b,c,d,e,i=0;
	
	while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)!=EOF)
	{
		if(a%2==0)
		i++;
		if(b%2==0)
		i++;
		if(c%2==0)
		i++;
		if(d%2==0)
		i++;
		if(e%2==0)
		i++;
		printf("%d valores pares\n",i);
		i=0;
	}
	return 0;
}