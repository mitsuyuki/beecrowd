#include <stdio.h>

int main()
{
	int i,g,grenais,vi,vg,e,resp;
	grenais=vi=vg=e=0;
	inicio:
	scanf("%d %d",&i,&g);
		++grenais;
		if(i>g)
		++vi;
		else if(g>i)
		++vg;
		else if(g==i)
		++e;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&resp);
		if(resp==1)
		goto inicio;
		else if(resp==2)
		{
			printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",grenais,vi,vg,e);
			if(vi>vg)
				printf("Inter venceu mais\n");
			else if(vg>vi)
				printf("Gremio venceu mais\n");
			else
				printf("Nao houve vencedor\n");
				
		}
	return 0;
}