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
	map<char, bool> m;
	// bool r = false, g = false, b = false;
	bool ans = true;
	for(auto i:s) {
		// cout<<i<<endl;
		if(i == 'r' || i == 'g' || i == 'b') m[i] = true;
		else {
			if(!m[i+32]) {
				ans = false;
				break;
			}
		}
	}
	if(ans) cout<<"YES";
	else cout<<"NO";

}
