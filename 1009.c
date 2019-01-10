#include<stdio.h>

main()
{
	char nome[20];
	double total, vsal,mes;
	
	while (gets(nome) && scanf("%lf %lf",&vsal,&mes) != EOF)
	{
			total=(mes*0.15)+vsal;
			printf("TOTAL = R$ %.2lf\n",total);
	}
	return 0;
}