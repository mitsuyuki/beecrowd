#include<stdio.h>

int main()
{
	int h1,m1,h2,m2,ht,mt,t1,t2,t;
	while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)!=EOF)
	{
		t1=(h1*60)+m1;
		t2=(h2*60)+m2;
		t=t2-t1;
		if(t<0)
			t=1440+t;
		ht=t/60;
		mt=t%60;
		if(h1==m1 && h1==h2 && h1==m2)
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
		else
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",ht,mt);
	}
	return 0;
}