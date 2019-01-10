#include<stdio.h>

main()
{
	double a, b, media;
	media=0;
	
	while (scanf("%lf %lf",&a,&b) != EOF)
	{
		media=((a*3.5)+(b*7.5))/11.0;
		printf("MEDIA = %.5lf\n",media);
}
	return 0;
}