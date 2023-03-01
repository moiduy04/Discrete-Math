#include <iostream>
using namespace std;
int main()
{
	int n; cin >> n;
	bool c[n+1];
	for(int i = 0; i < n; ++i) c[i] = false;
	for(int i = 2; i < n; ++i){
		if (c[i] == false){
			for (int j = 2*i; j < n; j += i){
				c[j] = true;
			}
		}
	}
	for(int i = 2; i < n; ++i){
		if (!c[i]) cout << i << ", "; // danh sách các số nguyên tố trong [0,n-1]
	}
	cout << endl;
	int amount = 0;
	for(int i = 2; i < n; ++i){
		if (!c[i]) ++amount;
	}
	cout << amount;// số số nguyên tố trong [0,n-1]
}
