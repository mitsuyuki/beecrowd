#include<stdio.h>
main()
{
	int valor,anos,meses,i;
	while(scanf("%d",&valor)!=EOF)
	{
		anos=(valor-(valor%365))/365;
		i=valor%365;
		meses=(i-(i%30))/30;
		i=i%30;
		printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",anos,meses,i);
	}
	return 0;
}