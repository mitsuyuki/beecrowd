#include<stdio.h>

int main()
{
	float n,valor;
	
	while(scanf("%f",&n)!=EOF)
	{
		if(n<=2000)
		{
			printf("Isento\n");
		}
		else if (n>2000 && n<=3000)
		{
			n-=2000;
			valor=n*0.08;
			printf("R$ %.2f\n",valor);
		}
		else if (n>3000 && n<=4500)
		{
			n-=3000;
			valor=(n*0.18)+80;
			printf("R$ %.2f\n",valor);
		}
		else if (n>4500)
		{
			n-=4500;
			valor=(n*0.28)+350;
			printf("R$ %.2f\n",valor);
		}
	}
	return 0;
}