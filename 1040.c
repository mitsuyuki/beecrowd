#include<stdio.h>
#include<math.h>
main()
{
	double a, b,c ,d,e,media;
	while(scanf("%lf %lf %lf %lf",&a,&b,&c,&d)!=EOF)
	{
		media=((a*2)+(b*3)+(c*4)+d)/10;
		printf("Media: %.1lf\n",media);
		if(media>=7.0)
		printf("Aluno aprovado.\n");
		if(media<5.0)
		printf("Aluno reprovado.\n");
		if(media>=5.0 && media<=6.9)
		{
			printf("Aluno em exame.\n");
			scanf("%lf",&e);
			printf("Nota do exame: %.1lf\n",e);
			media=(media+e)/2;
			if(media>=5.0)
			printf("Aluno aprovado.\n");
			if(media<=4.9)
			printf("Aluno reprovado.\n");
			printf("Media final: %.1lf\n",media);
		}
	}
		return 0;
	}