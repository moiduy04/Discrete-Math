#include <bits/stdc++.h>

using namespace std;

int count1(string s){
	int res = -1;
	
	if(s == ""){
		res = 0;
	}
	else{
		if (s[0] == '1') res = 1;
		if (s[0] == '0') res = 0;
		
		res += count1(s.substr(1,s.length()));
	}
	
	return res;
}

signed main()
{
	string s;
	cin >> s;
	cout << count1(s);
	return 0;
}
