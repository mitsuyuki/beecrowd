#include<stdio.h>

int Calc(int num1, int num2) {

    int resto, a, b;

    a = num1;
    b = num2;

    do {
        resto = a % b;

        a = b;
        b = resto;

    } while (resto != 0);

    return ( num1 * num2) / a;
}
//int Calc(int u,int v){
//
//	return (v!=0)?Calc(v,u%v):u;
//}
	
int main()
{
	int a,b,c,d,mmc;
	
	while(scanf("%d",&a)!=EOF)
	{
		scanf("%d %d %d",&b,&c,&d);
		mmc=Calc(Calc(b,c),d);
		printf("%d\n",mmc-a);
	}
	return 0;
}