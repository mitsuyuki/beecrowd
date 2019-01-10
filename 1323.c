#include<stdio.h>

long int Quadrado(int numero) {
	long int resultado;
	if(numero>0) {
	resultado=(numero*numero)+Quadrado(numero-1);
	return resultado;
	}
	else {
		resultado=0;
		return resultado;
	}
	
}
int main() {
	int n=1;
	long int res;
	while(n!=0) {
		scanf("%d",&n);
		if(n==0)
		continue;
		res=Quadrado(n);
		printf("%li\n",res);
	}
	return 0;
}