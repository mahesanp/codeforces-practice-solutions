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
	int n, temp;
	cin>>n;
	int idx = 0;
	vector<int> v;
	for(int i=0; i<n; i++) {
		cin>>temp;
		v.push_back(temp);
	}
	reverse(v.begin(), v.end());
	map<int, bool> m;
	for(int i=0; i<v.size(); i++) {
		if(m[v[i]]) {
			idx = n-i;
			break;
		} else {
			m[v[i]] = true;
		}
	}
	cout<<idx;
}
