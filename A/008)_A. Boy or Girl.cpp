
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cin >> str ;
    

   sort(str.begin(), str.end());
int cnt=1;
for (int i=0;i<str.size()-1;i++){
    
    if(str[i]!=str[i+1]){cnt++;}
}


if(cnt%2==0){cout<<"CHAT WITH HER!";}
else {cout<<"IGNORE HIM!";}
    
    
}