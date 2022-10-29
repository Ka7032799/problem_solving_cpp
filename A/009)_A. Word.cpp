
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cin >> str ;
    
    int c=0,l=0;
    for(int i=0;i<str.size();i++){
        
        if(str[i]>=97){l++;}
        else if(str[i]<97){c++;}
    }
  
  
  if(l>c){ transform(str.begin(), str.end(), str.begin(), towlower);cout<<str;}
  else if (l<c){transform(str.begin(), str.end(), str.begin(), towupper);cout<<str;}
  else if (l==c){transform(str.begin(), str.end(), str.begin(), towlower);cout<<str;}    
}