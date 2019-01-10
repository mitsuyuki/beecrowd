#include<stdio.h>
main()
{
	int valor,cem,cinq,vinte,dez,cinco,dois,i;
	while(scanf("%d",&valor)!=EOF)
	{
		cem=(valor-(valor%100))/100;
		i=valor%100;
		cinq=(i-(i%50))/50;
		i=i%50;
		vinte=(i-(i%20))/20;
		i=i%20;
		dez=(i-(i%10))/10;
		i=i%10;
		cinco=(i-(i%5))/5;
		i=i%5;
		dois=(i-(i%2))/2;
		i=i%2;
		printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",valor,cem,cinq,vinte,dez,cinco,dois,i);
	}
	return 0;
}