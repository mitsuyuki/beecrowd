#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,n,ra,be,ca,i;
	
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i<=n;++i)
		{
			scanf("%d %d",&a,&b);
			ra=(pow(3*a,2)+(b*b));
			be=(2*(a*a)+pow(5*b,2));
			ca=(-100*a+(b*b*b));
			if(ra>be && ra>ca)
				printf("Rafael ganhou\n");
			else if(be>ra && be>ca)
				printf("Beto ganhou\n");
			else if(ca>ra && ca>be)
				printf("Carlos ganhou\n");
		}
	}
	return 0;
}