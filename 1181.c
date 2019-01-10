#include<stdio.h>

int main()
{
	int n,l,c;
	char op;
	double m[12][12],soma=0;
	
	scanf("%d %c",&n,&op);
	for(l=0;l<12;l++)
		for(c=0;c<12;c++)
			scanf("%lf",&m[l][c]);

		for(c=0;c<12;c++)
			soma+=m[n][c];
	if(op=='S')
		printf("%.1lf\n",soma);
	else
	{
		printf("%.1lf\n",soma/12.0);
	}
	return 0;
}