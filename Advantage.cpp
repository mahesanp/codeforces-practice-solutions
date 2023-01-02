#include <bits/stdc++.h>
// #define int long long int
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
	int n;
	cin>>n;
	int arr[n];
	vector<int> v;
	map<int, int> m;
	for(auto &i:arr) {
		cin>>i;
		v.push_back(i);
	}
	sort(v.begin(), v.end(), greater<int>());
	// for(auto i:v) cout<<i<<" ";
	int temp = v[0]-v[1];
	m[v[0]] = temp;
	for(int i=1; i<v.size(); i++) {
		m[v[i]] = v[i]-v[0];
	}
	for(int i=0; i<n; i++) {
		cout<<m[arr[i]]<<" ";
	}

}
