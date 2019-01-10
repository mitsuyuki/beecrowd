#include<stdio.h>
#include<string.h>


int main()
{
	int n=1,a,i,t,comp;
	char nome[50],ganha[50];
	while(n!=0)
	{
		comp=10000;
		scanf("%d",&n);
		if(n==0)
		break;
		for(i=0;i<n;i++)
		{
			scanf("%s %d %d",&nome,&a,&t);
			if((a-t)<comp)
			{
				strcpy(ganha,nome);
				comp=a-t;
			}
		}
		puts(ganha);
	}
	
	return 0;
}