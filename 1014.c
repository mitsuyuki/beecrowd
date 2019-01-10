#include<stdio.h>

main()
{
	float x,y,total;
	while(scanf("%f %f",&x,&y)!=EOF)
	{
		total=x/y;
		printf("%.3f km/l\n",total);
	}
	return 0;
}