#include<stdio.h>
main()
{
	int valor,horas,min,i;
	while(scanf("%d",&valor)!=EOF)
	{
		horas=(valor-(valor%3600))/3600;
		i=valor%3600;
		min=(i-(i%60))/60;
		i=i%60;
		printf("%d:%d:%d\n",horas,min,i);
	}
	return 0;
}