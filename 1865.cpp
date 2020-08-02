#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, f;
	string nome;
	
	while(cin >> n) {
		for(int i=0;i<n;i++) {
			cin >> nome >> f;
			if(nome.compare("Thor") == 0) {
				cout << "Y" << endl;
			} else {
				cout << "N" << endl;
			}
		}
	}
	return 0;
}
