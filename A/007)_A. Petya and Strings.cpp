
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{

    string a, b;
    cin >> a >> b;

    transform(a.begin(), a.end(), a.begin(), towlower);
    transform(b.begin(), b.end(), b.begin(), towlower);

   

int n=a.compare(b);
if(n==0){cout<<0;}
else if  (n>0){cout<<1;}
else{cout<<-1;}


}