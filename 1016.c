#include<stdio.h>

main()
{
	int dist,total;
	while(scanf("%d",&dist)!=EOF)
	{
		total=(60*dist)/30;
		printf("%d minutos\n",total);
	}
	return 0;
}