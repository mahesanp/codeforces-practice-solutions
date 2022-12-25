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
	int w, h, n;
	cin>>w>>h>>n;
	int ans1 = 0, ans2 = 0, ans = 0;
	while(w%2 == 0) {
		ans1++;
		w = w>>1;
	}	
	while(h%2 == 0) {
		ans2++;
		h = h>>1;
	}

	cout<<ans1<<" "<<ans2<<endl;
	if(n == 1) cout<<"YES";
	else {
		if(ans1 == 0 || ans2 == 0) {
			ans = ans1+ans2;
		} else {
			ans1++;
			ans2++;
			ans1 *= 2;
			ans2 *= 2;
			ans = ans1*ans2;
		}
		
		// cout<<ans<<endl;
		if(n <= ans) cout<<"YES";
		else cout<<"NO";
	}

	
}
