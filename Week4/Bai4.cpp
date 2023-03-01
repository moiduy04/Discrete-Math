#include <iostream>

using namespace std;

int modInv(int a, int m){
	int xa = 1;
    int xm = 0;
    while(m != 0)
    {
        int q = a / m;
        int xr = xa - q * xm;
        xa = xm;
        xm = xr;
        int r = a % m;
        a = m;
        m = r;
    }
    return xa;
}

int main()
{
    int a, m;
    cin >> a >> m;
    cout << modInv(a,m);
    return 0;
}
