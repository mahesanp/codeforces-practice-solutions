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
	int odd = 0, even = 0;
	for(int i=0; i<n; i++) {
		cin>>temp;
		if(temp%2) odd++;
		else even++;
	}	
	if(odd == 0) cout<<"NO";
	else {
		if(even == 0) {
			if (n%2) cout<<"YES";
			else cout<<"NO";
		}
		else cout<<"YES";
	}

}
