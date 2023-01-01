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
	int a, b, n;
	cin>>a>>b>>n;
	bool flag = true;
	while(n) {
		if(n == 0) break;
		if(flag) {
			n -= __gcd(a,n);
			flag = false;
		} else {
			n -= __gcd(b, n);
			flag = true;
		}
	}	
	if(flag) cout<<1;
	else cout<<0;
}
