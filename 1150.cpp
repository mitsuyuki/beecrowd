#include<bits/stdc++.h>

using namespace std;

int main() {
	int x,z;
	while(cin >> x) {
		do {
			cin >> z;
		} while(z <= x);
		int cont = 0,soma=0;
		for(int i=x;soma<=z;i++) {
			soma+=i;
			cont++;
		}
		cout << cont << "\n";
	}
	return 0;
}
