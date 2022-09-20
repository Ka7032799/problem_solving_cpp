
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

	string a;
	cin >> a;
	int lenth = sz(a);
	int start = 0;
	int moves = 0;

	for(int i=0;i<lenth;i++)
	{
		int index = a[i] - 97;
		int walk = abs(start - index);
		if (walk < 13) {
			moves += walk;
		}
		else
		{
			moves+=26 - walk;
		}
		start = index;
		 
	}
	cout << moves;


}




