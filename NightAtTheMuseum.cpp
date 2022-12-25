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
	// cin >> t;
	
	while (t--) {
		solve();
		cout << "\n";
	}

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
void solve()
{
	int ans = 0;
	int curr = 1;
	string s;
	cin>>s;
	for(auto i:s) {
		// cout<<curr<<" ";
		int temp = abs(curr-((int)i-96));
		// cout<<temp<<" ";
		if(temp > 13) {
			temp = 26-temp;
		}		
		ans += temp;
		curr = (int)i-96;
	}
	cout<<ans;
	
}
