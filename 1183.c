#include<stdio.h>

int main()
{
	int l,c;
	char op;
	double m[12][12],soma=0;
	
	scanf("%c",&op);
	for(l=0;l<12;l++)
		for(c=0;c<12;c++)
			scanf("%lf",&m[l][c]);

	for(l=0;l<11;l++)
	{
		c=1+l;
		while(c<12)
		{				
			soma+=m[l][c];
			c++;
		}
	}
	if(op=='S')
		printf("%.1lf\n",soma);
	else
	{
		printf("%.1lf\n",soma/66.0);
	}
	return 0;
}