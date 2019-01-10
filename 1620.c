#include<stdio.h>

int main() {
	double n=1;
	while(n!=0) 
	{
		scanf("%lf",&n);
		if (n==0)
			continue;
		printf("%.6lf\n",(n-3.0)/n);
	}
	return 0;
}