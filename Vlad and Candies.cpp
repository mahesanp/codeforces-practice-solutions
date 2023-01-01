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
	for(int i=0; i<n; i++) {
		cin>>temp;
		v.push_back(temp);
	}	
	sort(v.begin(), v.end(), greater<int>());
	if(n == 1 && v[0] > 1) cout<<"NO";
	else if(n==1) cout<<"YES";
	else {
		if(abs(v[0]-v[1]) <= 1) cout<<"YES";
		else cout<<"NO";
	}
}
