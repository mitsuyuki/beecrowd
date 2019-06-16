#include<bits/stdc++.h>

using namespace std;

int main() {
	string nome;
	double n, soma = 0, cont = 0;
	while(getline(cin,nome)) {
		cin >> n;
		getchar();
		cont++;
		soma+=n;
	}
	cout << fixed << setprecision(1);
	cout << soma/cont << "\n";
	return 0;
}
