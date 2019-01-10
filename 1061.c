#include<stdio.h>

int main()
{
	long int d1,h1,m1,s1,d2,h2,m2,s2,t1,t2,t;
	int w,x,y,z;
	
	scanf("Dia %ld\n%ld : %ld : %ld\nDia %ld\n%ld : %ld : %ld",&d1,&h1,&m1,&s1,&d2,&h2,&m2,&s2);
		t1=(d1*86400)+(h1*3600)+(m1*60)+s1;
		t2=(d2*86400)+(h2*3600)+(m2*60)+s2;
		t=t2-t1;
	w=t/86400;
	x=(t%86400)/3600;
	y=((t%86400)%3600)/60;
	z=(((t%86400)%3600)%60);
		printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",w,x,y,z);
	return 0;
}