#include<stdio.h>
#include<math.h>
main()
{
	double a, b,c ,d,e,delta;
	while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
	{
		delta=(b*b)-4*a*c;
		d=(-b+pow(delta,(1/2.0)))/(2*a);
		e=(-b-pow(delta,(1/2.0)))/(2*a);
		if(delta<0 || a==0)
		printf("Impossivel calcular\n");
		else
		printf("R1 = %.5lf\nR2 = %.5lf\n",d,e);
		
	}
		return 0;
	}
	