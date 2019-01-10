#include<stdio.h>

int main()
{
	double i=0,j=1; 
	
	for(i=0;i<=2.0;i+=0.2)
	{
		if( i==0 || (i>0.9 && i<1.1) || (i>1.9 && i<2.1) || (i>2.9 && i<3.1) )
			printf("I=%.0lf J=%.0lf\nI=%.0lf J=%.0lf\nI=%.0lf J=%.0lf\n",i,j+i,i,j+i+1,i,j+i+2);
		else
			printf("I=%.1lf J=%.1lf\nI=%.1lf J=%.1lf\nI=%.1lf J=%.1lf\n",i,j+i,i,j+i+1,i,j+i+2);
		//j++;
		/*for(j=1;j<=3.0;j+=1)
		{
			printf("%I = %.1lf J = %.1lf\n",i,j)
		}*/
	}
	return 0;
}