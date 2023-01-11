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
	if(n <= 30) cout<<"NO";
	else {
		cout<<"YES\n";
		if(n%4 == 0) {
			cout<<6<<" "<<10<<" "<<15<<" "<<n-31;
		} else {
			cout<<6<<" "<<10<<" "<<14<<" "<<n-30;			
		}
	}
}
