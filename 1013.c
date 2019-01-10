#include<stdio.h>

main()
{
	int a, b,c, maior,maior2;
	
	while (scanf("%d %d %d",&a,&b,&c) != EOF)
	{
			maior=(a+b+abs(a-b))/2;
			maior2=(maior+c+abs(maior-c))/2;
			printf("%d eh o maior\n",maior2);
	}
	return 0;
}