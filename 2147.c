#include<stdio.h>
#include<string.h>
int main()
{
	int a,i;
	char s[10001];
	double t;
	
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%s",s);
		t=strlen(s)/100.0;
		printf("%.2lf\n",t);
	}
	return 0;
}