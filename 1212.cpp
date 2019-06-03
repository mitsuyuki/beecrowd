#include<bits/stdc++.h>
#define ACELERA ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;
int main() {
	ACELERA;
	
	string n1,n2;
	int quant;
	int carry;
	
	while(cin >> n1 >> n2) {
		if(n1 == "0" && n2 == "0")
			break;
		carry=quant=0;
		int tamanho1 = n1.size();
		int tamanho2 = n2.size();
		//int maior = max(tamanho1,tamanho2);
		//int menor = min(tamanho1,tamanho2);
		int i,j;
		for (i=tamanho1,j=tamanho2;i>=0 && j>=0;i--,j--) {
			//cout << n1[i] << " " << n2[j] << endl;
			if((n1[i]-48 + n2[j]-48 + carry)> 9) {
			//cout << "entrou com soma: "<< n1[i]-48 + n2[j]-48 + carry << endl;
				quant++;
				carry = 1;
			} else {
				carry = 0;
			}
		}
		//cout << "i: " << i << "j: " << j << endl;
		if(i>=0) {
		//cout << "entrou i"<< endl;
			if(n1[i]-48 == 9 && carry == 1)
				quant++;
		}
		if(j>=0) {
			if(n2[j]-48 == 9 && carry == 1)
				quant++;
		}
		if(quant == 0)
			cout << "No carry operation." << endl;
		if (quant == 1)
			cout << quant << " carry operation." << endl;
		if(quant > 1)
			cout << quant << " carry operations." << endl;
	}
	
	
	return 0;
}
