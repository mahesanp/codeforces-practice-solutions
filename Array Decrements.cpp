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
	int a[n], b[n];
	for(auto &i:a) cin>>i;
	for(auto &i:b) cin>>i;

	int check;
	bool f = 1;
	for(int i=0; i<n; i++) {
		if(b[i] != 0) {
			check = a[i]-b[i];
			f = 0;
			break;
		}
	}
	if(f) {
		cout<<"YES";
		return;
	}

	if(check < 0) {
		cout<<"NO";
		return;
	}
	bool flag = 1;
	for(int i=0; i<n; i++) {
		if(b[i] == 0) {
			if(a[i] - b[i] > check) {
				flag = 0;
				break;
			}
		} else {
			if(a[i]-b[i] != check) {
				flag = 0;
				break;
			}
		}
	}
	if(flag) cout<<"YES";
	else cout<<"NO";
}
