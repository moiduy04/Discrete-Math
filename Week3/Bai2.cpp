#include <iostream>
using namespace std;

int ternarySearch(int ar[], int n, int key) {
	int l = 0;
    int r = n-1;
    int m1, m2;
    while (l <= r) {
    	m1 = l + (r-l)/3;
    	m2 = r - (r-l)/3;
    	
    	if (ar[m1] == key) return m1;
    	else if (ar[m2] == key) return m2;
    	
    	if (key < ar[m1]) r = m1-1;
    	else if (key > ar[m2]) l = m2+1;
    	else {
    		l = m1+1;
    		r = m2-1;
		}
	}
	return -1;
}

int main() {
	int n, key;
	cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++) cin >> ar[i];
    cin >> key;
    int location = ternarySearch(ar,n,key);
    cout << location;
}