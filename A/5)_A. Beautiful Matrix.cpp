
#include <bits/stdc++.h>
using namespace std;



int main()
{
  
    int arr[6][6];
    int inr,inc;
    
    for(int r=1;r<=5;r++){
        
       for (int c=1;c<=5;c++){
           
            cin>>arr[r][c];
            if(arr[r][c]==1){inr=r;inc=c;}
        }
    }

int moves=0;

if(inr>3){moves+=(inr-3);}
if(inr<3){moves+=(3-inr);}


if(inc>3){moves+=(inc-3);}
if(inc<3){moves+=(3-inc);}


cout<<moves;
}

