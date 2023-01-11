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
	int n = s.length();
	set<char> se;
	int ans = 0;
	for(int i=0; i<n; i++) {

		se.insert(s[i]);
		if(se.size() == 4) {
			ans++;
			se.clear();
			se.insert(s[i]);
		}
		
	}	
	if(!se.empty()) ans++;
	cout<<ans;
}
