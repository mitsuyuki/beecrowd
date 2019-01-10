#include<stdio.h>
#include<string.h>

int main()
{
	int n,i,x,cont;
	char txt[1001],txt2[1001];
	
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		cont=0;
		//scanf("%[^\n]",txt);
		gets(txt);
		for(x=0;x<strlen(txt);x++)
		{
			if((txt[x]>=65 && txt[x]<=90) || (txt[x]>=97 && txt[x]<=122))
				txt[x]+=3;
		}
		cont=strlen(txt)-1;
		for(x=0;x<strlen(txt);x++)
		{
			txt2[cont]=txt[x];
			cont--;
		}
	//	puts(txt2);
		txt2[x]='\0';
		for(x=(strlen(txt2)/2.0);x<strlen(txt2);x++)
			txt2[x]--;
			
		printf("%s\n",txt2);
	}
	return 0;
}