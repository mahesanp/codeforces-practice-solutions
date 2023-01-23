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
	int n;
	cin>>n;
	int arr[n];
	for(auto &i:arr) {
		cin>>i;
		// cout<<i;
	}
	sort(arr, arr+n);
	int ans = 0;
	for(int i=0; i<n-1; i+=2) {
		ans += abs(arr[i]-arr[i+1]);
	}
	cout<<ans;
}
