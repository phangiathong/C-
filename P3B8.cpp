#include<iostream>
using namespace std;

int main() {
	int b,i,t,y,e;
	
	for (int b = 1; i <= 9; i++) {
		for (int i = 0; i <= 9; i++) {
			for (int t = 0; t <= 9; i++) {
				for (int y = 0; y <= 9; y++) {
					for (int e = 0; e <= 9; e++) {
						if (((100 * b + 10 * i + t) * 8 == 1000 * b + 100 * y + 10 * t + e) && b != i && b != y && b!= t && b != e && y != i && y != t && y != e && i != t && i != e && t != e) {
							cout << "b,i,t * 8 = " << b << y << t << e;				
						}
					}
				} 
			}
		}
	}
	return 0;
}
