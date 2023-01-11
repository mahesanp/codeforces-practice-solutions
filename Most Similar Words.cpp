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

int diff(string s1, string s2) {
	int ans = 0;
	for(int i=0; i<s1.length(); i++) {
		ans += abs(s1[i]-s2[i]);
	}
	return ans;
}
void solve()
{
	int n1, n2;
	cin>>n1>>n2;
	vector<string> v;
	string s;
	for(int i=0; i<n1; i++) {
		cin>>s;
		v.push_back(s);
	}
	int anss = INT_MAX, temp;
	for(int i=0; i<v.size(); i++) {
		for(int j=0; j<v.size(); j++) {
			if(i==j) continue;
			temp = diff(v[i], v[j]);
			if(temp < anss) anss = temp;

		}
	}
	cout<<anss;
	

}
