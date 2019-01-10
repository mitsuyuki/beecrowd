#include<stdio.h>

int main()
{
	int a,b,horas;
	while(scanf("%d %d",&a,&b) !=EOF)
	{
		if(a>=b)
		horas=24-(a-b);
		else
		horas=b-a;
		printf("O JOGO DUROU %d HORA(S)\n",horas);
	}
	return 0;
}