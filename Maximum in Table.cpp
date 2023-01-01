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
	// cout<<n;
	int arr[n][n];
	for(int i=0; i<n; i++) {
		arr[i][0] = 1;
		arr[0][i] = 1;
	}
	for(int i=1; i<n; i++) {
		for(int j=1; j<n; j++) {
			arr[i][j] = arr[i-1][j] + arr[i][j-1];
		}
	}
	cout<<arr[n-1][n-1];
}
