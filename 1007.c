#include<stdio.h>

main()
{
	int a, b,c,d, diferenca;
	diferenca=0;
	
	while (scanf("%i %i %i %i",&a,&b,&c,&d) != EOF)
	{
		diferenca=((a*b)-(c*d));
		printf("DIFERENCA = %i\n",diferenca);
}
	return 0;
}