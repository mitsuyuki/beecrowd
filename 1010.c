#include<stdio.h>

main()
{
	int c1,c2,v1,v2;
	float p1,p2, total;
	while (scanf("%d %d %f %d %d %f",&c1,&v1,&p1,&c2,&v2,&p2) != EOF)
	{
			total=((v1* p1)+(v2* p2));
			printf("VALOR A PAGAR: R$ %.2f\n",total);
	}
	return 0;
}