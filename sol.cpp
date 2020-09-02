#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int x, y;
		cin >> x >> y;
		if(x>y) {
			cout << "not applicable\n";
			continue;
		}
		int prod=1;
		for(int i=x; i<=y; ++i)
			if(i%2==0)
				prod*=i;
		if(prod==1)
			cout << 0;
		else
			cout << prod;
		cout << "\n";
	}
}

