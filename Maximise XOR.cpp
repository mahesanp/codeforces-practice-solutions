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
	string s1, s2;
	cin>>s1>>s2;
	int n = s1.length();
	// cout<<n<<endl;
	int one_1 = 0, zero_1 = 0, one_2 = 0, zero_2 = 0;
	for(auto i:s1) {
		if(i == '1') one_1++;
		else zero_1++;
	}

	for(auto i:s2) {
		if (i == '1') one_2++;
		else zero_2++;
	}

	int ans = min(zero_2, one_1) + min(one_2, zero_1);
	string anss = "";
	for(int i=0; i<ans; i++) {
		anss += '1';
	}
	for(int i=0; i < n - ans; i++) {
		anss += '0';
	}
	cout<<anss;

}
