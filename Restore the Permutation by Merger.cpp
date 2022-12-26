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
	vector<int> v;
	map<int, bool> m;
	for(int i=0; i<2*n; i++) {
		cin>>temp;
		if(m[temp]) continue;	
		else {
			v.push_back(temp);
			m[temp] = true;
		}
	}
	for(auto i:v) {
		cout<<i<<" ";
	}
}
