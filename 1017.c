#include<stdio.h>
main()
{
	int vel,tempo;
	double litros;
	while(scanf("%d %d",&tempo,&vel)!=EOF)
	{
		litros=(vel*tempo)/12.0;
		printf("%.3lf\n",litros);
	}
	return 0;
}