#include<stdio.h>
#include<string.h>

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

int main() {
	
	int i,n, res,tamanho;
	char c[5];
	int fat[9];
	fat[0] = 1;
	fat[1] = 1;
	fat[2] = 2;
	fat[3] = 6;
	fat[4] = 24;
	fat[5] = 120;
	fat[6] = 720;
	fat[7] = 4900;
	fat[8] = 39200;
	fat[9] = 352800;
	while(scanf("%s",c) != EOF) {
		if(c[0]-48 == 0) break;
		res=0;
		tamanho = strlen(c);
		strrev(c);
		for(i=0;i<tamanho;i++) {
			res += (c[i]-48) * (fat[i+1]);
		}
		
		printf("%d\n",res);
	}
	return 0;
}
