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

	int n;
	cin>>n;
	int x = 0;
	for(int i = 0; i<n; i++) {
		map<char, int> m;
		string s;
		cin>>s;
		for(auto i:s) {
			if(i == 'X') continue;
			m[i]++;
		}
		for(auto i:m) {
			if(i.first == '+') {
				x ++;
			} else {
				x --;
			}
		}

	}
	cout<<x;


	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
void solve()
{
		
}
