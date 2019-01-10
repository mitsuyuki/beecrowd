#include<stdio.h>


int main()
{
	float a,b=2.0,s=1.0;
	int i;
	
	for(i=3;i<=39;i+=2)
	{
		if(i==3)
		{
			s+=3.0/2.0;
			continue;
		}
		a=(float)i;
		b*=2.0;
		s+=(a/b);
	}
	printf("%.2f\n",s);
	return 0;
}