#include<stdio.h>

int main()
{
	float i,p2,soma=0,media;
	int n=1,p;
	while (n<=6)
	{
		scanf("%f",&i);
		n++;
		if(i>0)
		{
			p++;
			soma+=i;
		}
	}
	p2=p;
	media=(soma/p2);
	printf("%d valores positivos\n%.1f\n",p,media);
	return 0;
}