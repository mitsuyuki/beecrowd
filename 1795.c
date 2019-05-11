#include<stdio.h>

int main() {
	
	int n;
	int i;
	long long int v[21];
	
	v[0] = 1;
	while(scanf("%d",&n) != EOF) {
		if(n == 0) {
			printf("1\n");
		} else {
			for(i=1;i<=n;i++) {
				v[i] = v[i-1]*3;
			}
			printf("%lld\n", v[n]);
		}
	}
	
	return 0;
}
