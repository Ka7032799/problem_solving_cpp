
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

	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	 
	string str;
	cin >> str;

	ll r1=0, r2=0, r3=0, r4=0;

	for (int i = 0; i < sz(str); i++)
	{
		int n = str[i] - '0';
				 if (n == 1) { r1++; }
			else if (n == 2) { r2++; }
			else if (n == 3) { r3++; }
			else if (n == 4) { r4++; }
	}

	cout << (r1 * a + r2 * b + r3 * c + r4 * d);


}





