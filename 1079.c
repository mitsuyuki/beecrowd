#include<stdio.h>

int main()
{
	int a,i;
	float b,c,d,n[1000];
	
	while(scanf("%d",&a)!=EOF)
	{
		for(i=1;i<=a;i++)
		{
			scanf("%f %f %f",&b,&c,&d);
			n[i]=((b*2)+(c*3)+(d*5))/10.0;
		}
		for(i=1;i<=a;i++)
		{
			printf("%.1f\n",n[i]);
		}
	}
	return 0;
}