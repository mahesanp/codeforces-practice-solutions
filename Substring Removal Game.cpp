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
	vector<int> v;
	int count = 0;
	for(auto i:s) {
		if(i == '1') count++;
		else {
			if(count != 0) {
				v.push_back(count);
				count = 0;
			}
		}
	}	
	if(count != 0) {
		v.push_back(count);
	}
	sort(v.begin(), v.end(), greater<int>());
	int ans = 0;
	for(int i=0; i<v.size(); i+=2) {
		ans += v[i];
	}
	cout<<ans;
}
