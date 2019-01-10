#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double raio,area,pi=3.14159;
	while(cin>>raio)
	{
		area=pi*(pow(raio,2));
		printf("A=%.4f\n",area);
	}
	return 0;
}