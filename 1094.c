#include<stdio.h>

int main()
{
	int n,i,c=0,r=0,s=0,m=0,q;
	float pc,pr,ps,quant=0;
	char l;
	
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d %c",&m,&l);
			if(l=='C')
				c+=m;
			if(l=='S')
				s+=m;
			if(l=='R')
				r+=m;
			quant+=m;
		}
		q=quant;
		pc=(c/quant)*100;
		pr=(r/quant)*100;
		ps=(s/quant)*100;
		printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n",q,c,r,s,pc,pr,ps);
	}
	return 0;
}