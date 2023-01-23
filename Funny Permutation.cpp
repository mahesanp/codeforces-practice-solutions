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
	if(n == 2) {
		cout<<2<<" "<<1;
		return;
	} else if(n == 3) {
		cout<<-1;
		return;
	}

	cout<<n-1<<" "<<n<<" ";
	for(int i=1; i<=n-2; i++) {
		cout<<i<<" ";
	}
}
