
#include <bits/stdc++.h>

using namespace std;

int main()
{
  
  int size ;
  cin>>size ;
  int arr[size];
  
  for(int i=0;i<size;i++){
      cin>>arr[i];
  }
  sort(arr,arr+size);
  
 for(int i=0;i<size;i++){
     cout<<arr[i]<<" ";
  }
   
}
