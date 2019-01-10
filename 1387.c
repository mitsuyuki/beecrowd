#include<stdio.h>

int main()
{
	int l,r,total;
	
	while(scanf("%d %d",&l,&r)!=EOF)
	{
		if(l==0 && r==0)
		break;
		total=l+r;
		printf("%d\n",total);
	}
	return 0;
}