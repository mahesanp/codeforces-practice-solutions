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
	map<int, int> m;
	int arr[n];
	for(auto &i:arr) {
		cin>>i;
	}	
	sort(arr, arr+n);
	int temp = arr[0];
	for(auto i:arr) {
		 if(i == temp) m[i]++;
	}
	cout<<n-m[temp];
}
