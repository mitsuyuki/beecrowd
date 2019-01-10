#include<stdio.h>

main()
{
	double a, b,c, media;
	media=0;
	
	while (scanf("%lf %lf %lf",&a,&b,&c) != EOF)
	{
		media=((a*2)+(b*3)+(c*5))/10.0;
		printf("MEDIA = %.1lf\n",media);
}
	return 0;
}