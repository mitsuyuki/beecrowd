#include<stdio.h>

int main()
{
	int n[100],i,maior=0,pos=0;
	
	for(i=0;i<100;i++)
	{
		scanf("%d",&n[i]);
		if(n[i]>maior)
		{
			maior=n[i];
			pos=i+1;
		}
	}
	printf("%d\n%d\n",maior,pos);
	return 0;
}