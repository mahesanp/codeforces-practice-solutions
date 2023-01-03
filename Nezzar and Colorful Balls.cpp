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
	int curr = 1;
	int max = -1;
	int arr[n];
	for(auto &i:arr) {
		cin>>i;
	} 
	for(int i=0; i<n-1; i++) {
		if(arr[i] != arr[i+1]) {
			if(max < curr) max = curr;
			curr = 1;
		} else {
			curr++;
		}
	}
	if(max < curr) max = curr;
	cout<<max;
}
