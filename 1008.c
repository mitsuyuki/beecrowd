#include<stdio.h>

main()
{
	int horas,n;
	float val,sal;
	
	while (scanf("%i %i %f",&n,&horas,&val) != EOF)
	{
		sal=horas*val;
		printf("NUMBER = %i\nSALARY = U$ %.2f\n",n,sal);
}
	return 0;
}