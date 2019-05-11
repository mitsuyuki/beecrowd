#include<stdio.h>
#include<string.h>

int main() {
	
	int n,tamanho,i,quant;
	char c[25];
	long long int res;
	
	scanf("%d",&quant);
	for(i=0;i<quant;i++) {
		scanf("%d%s",&n,c);
		tamanho = strlen(c);
		res=1;
		while(n>=1) {
			res*=n;
			n-=tamanho;
		}
		
		printf("%lld\n",res);
	}
	return 0;
}
