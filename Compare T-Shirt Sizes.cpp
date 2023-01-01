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
	string s1, s2;
	int n1, n2;
	cin>>s1>>s2;
	n1 = s1.length();
	n2 = s2.length();
	char c1, c2;
	c1 = s1[n1-1];
	c2 = s2[n2-1];
	if(c1 == 'S') {
		if(c2 == 'M' || c2 == 'L') cout<<"<";
		else {
			if(n1 > n2) cout<<"<";
			else if(n1 < n2) cout<<">";
			else cout<<"=";
		}
	} else if(c1 == 'M') {
		if(c2 == 'S') cout<<">";
		else if(c2 == 'L') cout<<"<";
		else {
			cout<<"=";
		}
	} else {
		if(c2 == 'S' || c2 == 'M') cout<<">";
		else {
			if(n1 > n2) cout<<">";
			else if(n1 < n2) cout<<"<";
			else cout<<"=";
		}
	}
}
