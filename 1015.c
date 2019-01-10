#include<stdio.h>
#include<math.h>

main()
{
	float x1,y2,x2,y1,total;
	while(scanf("%f %f %f %f",&x1,&y1,&x2,&y2)!=EOF)
	{
		total=sqrt((pow(x2-x1,2))+pow(y2-y1,2));
		printf("%.4f\n",total);
	}
	return 0;
}