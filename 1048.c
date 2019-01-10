#include<stdio.h>

int main()
{
	double sal,reaj,nv;
	while(scanf("%lf",&sal) != EOF)
	{
		if(sal>0 && sal<=400)
		{
			reaj=sal*0.15;
			nv=reaj+sal;
			printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n",nv,reaj);
		}
		if(sal>400 && sal<=800)
		{
			reaj=sal*0.12;
			nv=reaj+sal;
			printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n",nv,reaj);
		}
		if(sal>800 && sal<=1200)
		{
			reaj=sal*0.10;
			nv=reaj+sal;
			printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n",nv,reaj);
		}
		if(sal>1200 && sal<=2000)
		{
			reaj=sal*0.07;
			nv=reaj+sal;
			printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n",nv,reaj);
		}
		if(sal>2000)
		{
			reaj=sal*0.04;
			nv=reaj+sal;
			printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n",nv,reaj);
		}
	}
	return 0;
}