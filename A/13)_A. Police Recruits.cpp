
#include <vector>
#include <deque>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <utility>
#include <string>
#include <iostream>	
#include <sstream> 
#include <queue>
#include <stack>
#include <map>

using namespace std;
#define ll long long
#define endl '\n'
#define fix(n) cout << fixed << setprecision(n)
#define NeedForSpeed ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define all(v) (v).rbegin() , (v).rend() 

int main() {
	NeedForSpeed;

	

	int times;
	cin >> times;
   int p=0;int r=0;
   
   
	while (times--)
	{
	    int n=0;
	    cin>>n;
	    
	    if(n!=-1){p+=n;}
	    else
	    {
	       if(p>0){p--;}
	       else{r++;}
	    }
	    

	}

	cout << r;

	
	
}