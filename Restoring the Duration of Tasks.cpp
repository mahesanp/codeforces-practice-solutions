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
	int arr1[n];
	int arr2[n];
	for(auto &i:arr1) {
		cin>>i;
	}
	for(auto &i:arr2) {
		cin>>i;
	}

	cout<<arr2[0]-arr1[0]<<" ";
	for(int i=1; i<n; i++) {
		if(arr1[i] > arr2[i-1]) {
			cout<<arr2[i]-arr1[i]<<" ";
		}else {
			cout<<arr2[i]-arr2[i-1]<<" ";
		}
	}

}
