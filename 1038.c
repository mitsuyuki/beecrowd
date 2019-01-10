#include<stdio.h>

main()
{
	int codigo,quant;
	float total;
	
	while (scanf("%i %i",&codigo,&quant) != EOF)
	{
		if ( codigo==1)
		{
			total=4.00*quant;
			printf("Total: R$ %.2f\n",total);
		}
		if ( codigo==2)
		{
			total=4.50*quant;
			printf("Total: R$ %.2f\n",total);
		}
		if ( codigo==3)
		{
			total=5.00*quant;
			printf("Total: R$ %.2f\n",total);
		}
		if ( codigo==4)
		{
			total=2.00*quant;
			printf("Total: R$ %.2f\n",total);
		}
		if ( codigo==5)
		{
			total=1.50*quant;
			printf("Total: R$ %.2f\n",total);
		}
}
	return 0;
}