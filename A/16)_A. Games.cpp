
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl			'\n'
#define sz(x)           x.size()
#define fix(n)          cout << fixed << setprecision(n)
#define Need_For_Speed	ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define all(v)			(v).begin() , (v).end() 
#define rall(v)			(v).rbegin() , (v).rend() 
#define num_of_digits(x)           ((ll)log10(x) + 1)




int main() {
	Need_For_Speed;

	int n, res = 0;
	cin >> n;
	

	int h[n], g[n];
	for (int i = 0; i < n; i++) {
		cin >> h[i] >> g[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (h[i] == g[j]) { res++; }
		}



	}

	cout << res<<endl;



}