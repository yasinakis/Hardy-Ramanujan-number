#include <iostream>
using namespace std;
int main() {
	int a = 1;
	int b = 1;
	int c = 1;
	int d = 1;
	cout << " Please enter a number (It should be smaller then 100.000)" << endl;
	int number;
	
	cin >> number;
	if (number > 100000) {
		cout << "please enter a number which is smaller than 100.000" << endl;
		return 0;

	}
	int cubeofa = a * a * a;
	int	cubeofb = b * b * b;
	int cubeofc = c * c * c;
	int	cubeofd = d * d * d;
	int total1 = cubeofa + cubeofb;
	int total2 = cubeofc + cubeofd;
	
	for (int i = 1; i < 100; i++) {
		a = i;
		for (int f = 0; f < 100; f++) {
			b = f; 
			
			int total = a * a * a + b * b * b;
			if (total==number){
				cout << " Entered number is a Hardy-Ramanujan number" << endl;
				cout << "The entered number is the sum of the cubes of " << a << " and " << b << endl;

			}	
			
		}
	}
	cout << "There is no any/other Hardy-Ramanujan number" << endl;
}