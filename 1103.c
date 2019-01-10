#include<stdio.h>

int main()
{
	int a,b,c,d,t1,t2,f;
	
	while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF)
	{
		if (a==0 && b==0 && c==0 && d==0)
			break;
		if(a==0)
			a=24;
		if(c==0)
			c=24;
		t1=(a*60)+b;
		t2=(c*60)+d;
		if(t1<t2)
		f=t2-t1;
		if(t2<t1)
		f=1440-(t1-t2);
		printf("%d\n",f);
	}
	return 0;