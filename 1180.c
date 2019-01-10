#include<stdio.h>

int main()
{
	int v[1001],n,i,menor,pos;
	
    scanf("%d",&n);
	    scanf("%d",&v[0]);
		menor=v[0];
		pos=0;
		for(i=1;i<n;i++)
		{
			scanf("%d",&v[i]);
			if(v[i]<menor)
			{
				menor=v[i];
				pos=i;
			}
		}
		printf("Menor valor: %d\nPosicao: %d\n",menor,pos);
	return 0;
}