#include<stdio.h>

main()
{
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		if(a<b && b<c)
			printf("%d\n%d\n%d\n",a,b,c);
		else if(c<a && b<c)
			printf("%d\n%d\n%d\n",b,c,a);
		else if(c<a && a<b)
			printf("%d\n%d\n%d\n",c,a,b);
		else if(a<c && c<b)
			printf("%d\n%d\n%d\n",a,c,b);
		else if(b<a && a<c)
			printf("%d\n%d\n%d\n",b,a,c);
		else if(c<b && b<a)
			printf("%d\n%d\n%d\n",c,b,a);
		printf("\n%d\n%d\n%d\n",a,b,c);
	}
	return 0;
}