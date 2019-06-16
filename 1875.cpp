#include<bits/stdc++.h>

using namespace std;

int main() {
	int casos, gols;
	while(cin >> casos) {
		for(int x=0;x<casos;x++) {
			cin >> gols;
			int red = 0, green = 0, blue = 0;
			for(int y=0;y<gols;y++) {
				char g1,g2;
				cin >> g1 >> g2;
				if(g1 == 'R') {
					if(g2 == 'G') {
						red+=2;
					} else {
						red++;
					}
				} else if (g1 == 'G') {
					if(g2 == 'B') {
						green+=2;
					} else {
						green++;
					}
				} else {
					if(g2 == 'R') {
						blue+=2;
					} else {
						blue++;
					}
				}
			}
			if(green == red && red == blue)
				cout << "trempate" << "\n";
			else if((green == red && red > blue) || (green == blue && blue > red) || (blue == red && red > green))
				cout << "empate" << "\n";
			else if(green > red && green > blue)
				cout << "green" << "\n";
			else if(red > green && red > blue)
				cout << "red" << "\n";
			else 
				cout << "blue" << "\n";
		}
	}
	return 0;
}
