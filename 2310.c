#include<stdio.h>

int main()
{
	int n,s,b,a,sc,bc,ac,i,tsaque=0,tbloq=0,tat=0,tsc=0,tbc=0,tac=0;
	double ps,pb,pa;
	char nome[1000];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%s\n%d %d %d\n%d %d %d",nome,&s,&b,&a,&sc,&bc,&ac);
		tsaque+=s;
		tbloq+=b;
		tat+=a;
		tsc+=sc;
		tbc+=bc;
		tac+=ac;
	}
	ps=(double)tsc/(double)tsaque;
	pb=(double)tbc/(double)tbloq;
	pa=(double)tac/(double)tat;
	printf("Pontos de Saque: %.2lf %%.\nPontos de Bloqueio: %.2lf %%.\nPontos de Ataque: %.2lf %%.\n",ps*100,pb*100,pa*100);
	return 0;
}