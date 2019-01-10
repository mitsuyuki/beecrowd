#include<stdio.h>
#include<string.h>

int main()
{
	char p1[20],p2[20],p3[20];
	
	gets(p1);
	gets(p2);
	gets(p3);
	
	if(!strcmp(p1,"vertebrado") && !strcmp(p2,"ave") && !strcmp(p3,"carnivoro"))
	printf("aguia\n");
	
	else if(!strcmp(p1,"vertebrado") && !strcmp(p2,"ave") && !strcmp(p3,"onivoro"))
	printf("pomba\n");
	
	else if(!strcmp(p1,"vertebrado") && !strcmp(p2,"mamifero") && !strcmp(p3,"onivoro"))
	printf("homem\n");
	
	else if(!strcmp(p1,"vertebrado") && !strcmp(p2,"mamifero") && !strcmp(p3,"herbivoro"))
	printf("vaca\n");
	
	else if(!strcmp(p1,"invertebrado") && !strcmp(p2,"inseto") && !strcmp(p3,"hematofago"))
	printf("pulga\n");
	
	else if(!strcmp(p1,"invertebrado") && !strcmp(p2,"inseto") && !strcmp(p3,"herbivoro"))
	printf("lagarta\n");
	
	else if(!strcmp(p1,"invertebrado") && !strcmp(p2,"anelideo") && !strcmp(p3,"hematofago"))
	printf("sanguessuga\n");
	
	else if(!strcmp(p1,"invertebrado") && !strcmp(p2,"anelideo") && !strcmp(p3,"onivoro"))
	printf("minhoca\n");

	return 0;
}