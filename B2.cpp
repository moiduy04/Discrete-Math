#include <iostream>
using namespace std;

int GCD(int a, int b) {
	if (b == 0) return a;
	GCD(b, a%b);
}

int LCM(int a, int b) {
	return a*b / GCD(a,b);
}

int main() {
	int a = 4794, b = 2306;
	int solution = LCM(a,b);
	cout << solution;
	
	return 0;
}