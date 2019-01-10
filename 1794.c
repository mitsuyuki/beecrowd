#include<stdio.h>


int main()
{
	int n,la,lb,sa,sb;
	while(scanf("%d\n%d %d\n%d %d",&n,&la,&lb,&sa,&sb)!=EOF)
	{
		if(n>=la && n>=sa && n<=lb && n<= sb)
			printf("possivel\n");
		else
			printf("impossivel\n");
	}
	return 0;
}