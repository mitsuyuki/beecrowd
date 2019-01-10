#include<stdio.h>

int main()
{
	char t[]= "LIFE IS NOT A PROBLEM TO BE SOLVED",p[34];
	int n,i;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			p[i]=t[i];
			printf("%c",p[i]);
		}
		printf("\n");
	}
	return 0;
}