#include <bits/stdc++.h>
using namespace std;



int main()
{
    int size;
    cin>>size;
    int arr[size][3];
    
      int cnt=0;
    for(int r=0;r<size;r++){
        int f=0;
        for (int c=0;c<3;c++){
            cin>>arr[r][c];
            if(arr[r][c]==1){f++;}
        }
         if(f>=2){cnt++;}
    }


    cout<<cnt;


}
