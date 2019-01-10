#include<stdio.h>

int main()
{
	int n,i,tempo,x,pa,pb;
	double g1,g2;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		tempo=0;
		scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);
		while(pa<=pb)
		{
			if(tempo>100)
				break;
			pa=pa+pa*(g1/100);
			pb=pb+pb*(g2/100);
			tempo++;
		}
		if(tempo>100)
			printf("Mais de 1 seculo.\n");
		else
			printf("%d anos.\n",tempo);
	}
	return 0;
}