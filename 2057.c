#include<stdio.h>

int main()
{
	int s,d,f,r;
	
	while ( scanf("%d %d %d",&s,&d,&f) != EOF)
	{
		r=s+d+f;
		if(r>24)
		r-=24;
		if(r<0)
		r+=24;
		if(r==24)
		r=0;
		printf("%d\n",r);
	}
	return 0;
}