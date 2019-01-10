#include<stdio.h>

int main()
{
	int v[1001],n,i,j;
	double res,quant,x,media;
	
scanf("%d",&n);
//	{
		for(i=0;i<n;i++)
		{
			media=quant=0.0;
			scanf("%lf",&x);
			for(j=0;j<x;j++)
			{
				scanf("%d",&v[j]);
				media+=v[j];
			}
			media/=x;
		//	printf("%d\n",media);
			for(j=0;j<x;j++)
			{
				if(v[j]>media)
				quant++;
			}
		//	printf("%d\n",quant);
			res=quant*100/x;
			printf("%.3lf%%\n",res);
		}
//	}
	return 0;
}