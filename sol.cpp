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
	// cout<<t<<endl;
	while (t--) {
		solve();
		// cout << "\n";
	}

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
void solve()
{
	int n;
	cin>>n;
	// cout<<n<<endl; 	
	int arr[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
		// cout<<arr[i];
	}

	int odd = 0;
	int odd_s = INT_MAX, even_s = INT_MAX;
	for(auto i:arr) {
		int temp = i;
		if(temp%2 == 0) {
			int c = 0;
			while(temp%2 != 1) {
				c++;
				temp = temp>>1;
			}
			odd_s = min(odd_s,c);
		} else {
			odd++;
			int c = 0;
			while(temp%2 == 1) {
				c++;
				temp = temp>>1;
			}
			even_s = min(even_s, c);
		}
	}
	if(odd%2 == 0) {
		cout<<0<<endl;
	} else {
		cout<<min(odd_s, even_s)<<endl;
	}
}
