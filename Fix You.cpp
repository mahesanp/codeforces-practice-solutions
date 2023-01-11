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
	int n, m;
	cin>>n>>m;
	char arr[n][m];
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin>>arr[i][j];
		}
	}
	int ans = 0;

	for(int a = 0; a<n; a++){
		for(int b = 0; b<m; b++) {
			int i = a, j = b;
			while(i < n-1 || j < m-1) {
				// cout<<arr[i][j]<<" "<<i<<" "<<j<<endl;
				if(arr[i][j] == 'R') {
					if(j < m-1) j++;
					else {
						arr[i][j] = 'D';
						ans++;	
						i++;
					}
				} else {
					if(i < n-1) i++;
					else {
						arr[i][j] = 'R';
						ans++;
						j++;
					}
				}
			}
		}
	}
	
	cout<<ans;

}
