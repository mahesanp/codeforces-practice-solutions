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
	int n;
	cin>>n;
	int arr[n];
	vector<int> v;
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}

	int l = 0, r = n-1;
	while(l<=r) {
		if(l == r) {
			v.push_back(arr[l]);
			l++;r--;
		}else {
			v.push_back(arr[l]);
			v.push_back(arr[r]);
			l++;r--;
		}
	}
	for(auto i:v) {
		cout<<i<<" ";
	}
}
