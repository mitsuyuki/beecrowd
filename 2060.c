#include<stdio.h>

int main()
{
	int n,m,m2,m3,m4,m5,i;
	
	while ( scanf("%d",&m) != EOF)
	{
		m2=0;
		m3=0;
		m4=0;
		m5=0;
		for(i=1;i<=m;i++)
		{
			scanf("%d",&n);
			if((n%2)==0)
			m2++;
			if((n%3)==0)
			m3++;
			if((n%4)==0)
			m4++;
			if((n%5)==0)
			m5++;
		}
		printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",m2,m3,m4,m5);
	
	}
	return 0;
}