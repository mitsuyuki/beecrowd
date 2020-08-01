#include<bits/stdc++.h>

using namespace std;

int main() {
	string a;
	
	while(cin >> a) {
		if(a[0] == '-')
			break;
		unsigned int num = 0;
		int inicio = 0;
		if(a[1] == 'x') {
			inicio = 2;
			for(int i=inicio;i<a.size();i++) {
				//cout << "i: " << i << " a[i-1]: " << a[i-1] << " -48 " << a[i-1]-48 << endl;
				if(a[i]>=97)
					a[i] -= 32;
				if(a[i]>=65)
					a[i] -= 7;
				num += (a[i]-48) * pow(16,a.size()-i-1);
			}
			printf("%d\n",num);
		} else {
			for(int i=inicio;i<a.size();i++) {
				//cout << "i: " << i << " a[i-1]: " << a[i-1] << " -48 " << a[i-1]-48 << endl;
				num += (a[i]-48) * pow(10,a.size()-i-1);
			}
			printf("0x%X\n",num);
		}
	}
	return 0;
}