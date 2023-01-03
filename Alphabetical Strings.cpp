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
	string s;
	cin>>s;
	// cout<<s;
	int n = s.length();

	int i = -1;
	for(int idx=0; idx<n; idx++) {
		if(s[idx] == 'a'){
			i = idx;
			break;
		} 
	}
	if(i == -1) {
		cout<<"NO";
		return;
	}
	int l = i-1, r = i+1;
	bool flag = true;
	char curr = 'b';
	while(1) {
		if(l >= 0 && s[l] == curr) {
			l--;
			curr++;
		} else if(r < n && s[r] == curr) {
			r++;
			curr++;
		} else {
			if(l >= 0 || r < n) flag = false;
			break;
		}
	}
	if(flag) cout<<"YES";
	else cout<<"NO";

}
