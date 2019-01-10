#include<stdio.h>

int main()
{
	int b,a,i,maior,menor;
	
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(a>b)
		{
			maior=a;
			menor=b;
		}
		else
		{
			maior=b;
			menor=a;
		}
		
		for(i=menor+1;i<=maior-1;++i)
		{
			if(i%5==2 || i%5==3)
			printf("%d\n",i);
		}
	}
	return 0;
}