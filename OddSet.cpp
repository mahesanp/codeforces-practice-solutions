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
	for(int i=0; i<2*n; i++) {
		cin>>temp;
		// cout<<temp<<" ";
		if(temp&1) odd++;
		else even++;
	}
	// cout<<odd<<" "<<even<<endl;
	if(odd == even) cout<<"Yes";
	else cout<<"No";
}
