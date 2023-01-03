#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	cin >> t;
	
	while (t--) {
		solve();
		cout << "\n";
	}

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
void solve()
{
	string s;
	cin>>s;
	for(int i=0; i<s.length(); i++) {
		if(i%2 == 0) {
			if(s[i] == 'a') cout<<'b';
			else cout<<'a';
		} else {
			if(s[i] == 'z') cout<<'y';
			else cout<<"z";
		}
	}
}
