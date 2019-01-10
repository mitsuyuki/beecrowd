#include<stdio.h>

int main()
{
	int n,par[5],impar[5],cont=15,cpar=0,cimpar=0,i;
	
	while(cont>0)
	{
		scanf("%d",&n);
		if(n%2==0)
		{
			par[cpar]=n;
			cpar++;
			if(cpar==5)
			{
				for(i=0;i<cpar;i++)
					printf("par[%d] = %d\n",i,par[i]);
				cpar=0;
			}
		}
		else
		{
			impar[cimpar]=n;
			cimpar++;
			if(cimpar==5)
			{
				for(i=0;i<cimpar;i++)
					printf("impar[%d] = %d\n",i,impar[i]);
				cimpar=0;
			}
		}
		cont--;
	}
	if(cimpar==0)
		{
			if(cpar!=0)
				for(i=0;i<cpar;i++)
					printf("par[%d] = %d\n",i,par[i]);
		}
		else
		{
			for(i=0;i<cimpar;i++)
				printf("impar[%d] = %d\n",i,impar[i]);
			if(cpar!=0)
				for(i=0;i<cpar;i++)
					printf("par[%d] = %d\n",i,par[i]);
		}
	return 0;
}