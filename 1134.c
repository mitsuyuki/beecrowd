#include<stdio.h>

int main()
{
	int n,a,g,d;
	a=g=d=0;
	while (scanf("%d",&n)!=EOF)
	{
		if (n==1)
		a++;
		else if (n==2)
		g++;
		else if(n==3)
		d++;
		else if(n==4)
		break;
	}
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);
		a=g=d=0;
	return 0;
}