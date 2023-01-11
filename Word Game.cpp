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
	int s1 = 0, s2 = 0, s3 = 0;
	string temp;
	map<string, pair<int, int>> m;
	for(int i=0; i<n; i++) {
		cin>>temp;
		m[temp].first=1;
		s1+=3;
	}
	for(int i=0; i<n; i++) {
		cin>>temp;
		if(m[temp].first) {
			s1 -= 2;
			s2++;
		} else {
			s2 += 3;
		}
		m[temp].second=1;
	}
	for(int i=0; i<n; i++) {
		cin>>temp;
		if(m[temp].first == 1 && m[temp].second == 1) {
			s2--;s1--;
		} else if(m[temp].first == 1) {
			s1-=2;
			s3++;
		} else if(m[temp].second == 1) {
			s2 -= 2; s3++;
		} else {
			s3 += 3;
		}
	}
	cout<<s1<<" "<<s2<<" "<<s3;
}
