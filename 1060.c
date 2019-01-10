#include<stdio.h>

int main()
{
	float i;
	int n=1,p=0;
	while (n<=6)
	{
		scanf("%f",&i);
		n++;
		if(i>0)
		p++;
	}
	printf("%d valores positivos\n",p);
	return 0;
}