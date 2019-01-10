#include<stdio.h>

int main()
{
	int a,b,c,d,e,i=0,p=0,m=0,n=0;
	
	while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)!=EOF)
	{
		if(a%2==0)
		i++;
		if(b%2==0)
		i++;
		if(c%2==0)
		i++;
		if(d%2==0)
		i++;
		if(e%2==0)
		i++;
		if(a%2!=0)
		p++;
		if(b%2!=0)
		p++;
		if(c%2!=0)
		p++;
		if(d%2!=0)
		p++;
		if(e%2!=0)
		p++;
		if(a>0)
		m++;
		if(b>0)
		m++;
		if(c>0)
		m++;
		if(d>0)
		m++;
		if(e>0)
		m++;
		if(a<0)
		n++;
		if(b<0)
		n++;
		if(c<0)
		n++;
		if(d<0)
		n++;
		if(e<0)
		n++;
		printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",i,p,m,n);
		i=0;
		p=0;
		m=0;
		n=0;
	}
	return 0;
}